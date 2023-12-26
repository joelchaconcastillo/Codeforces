#include <bits/stdc++.h>
using namespace std;
/*
 *   given n --> x find gcd(a, x)=1 and d(x*a)=x
 *   t<100, n<=10^6, q<=10^3
 * */
const int N = 1000003;
map<int, int> powers, original_divisors;
int smallest_divisor[N];
bool mark[N];
long long divisor_count = 1;
void prime(){
   smallest_divisor[1]=1;
   smallest_divisor[2]=2;
   for(int i = 4; i < N; i+=2){
      mark[i]=true;
      smallest_divisor[i]=2;
   }
   for(int i = 3; i < N; i+=2){
      if(mark[i])continue;
      smallest_divisor[i]=i;
      for(long long j = i*1ll*i; j < N; j+=2*i){
	     if(mark[j])continue;
	     smallest_divisor[j]=i;
	     mark[j]=1;
      }
   }
}
void factorize(int x){
   int p = 0, current_divisor=1;
   while(x>1){
	   if(smallest_divisor[x]!=current_divisor){
	      if(p>0){
		 divisor_count /= powers[current_divisor]+1;
		 powers[current_divisor] +=p;
		 divisor_count *= powers[current_divisor]+1;
	      }
	      p=1; current_divisor = smallest_divisor[x];
	   }else p++;
	   x /=smallest_divisor[x];
   }
   if(p>0){
	 divisor_count /= powers[current_divisor]+1;
	 powers[current_divisor] +=p;
	 divisor_count *= powers[current_divisor]+1;

   }
}
int main(){
   prime();
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin >> T;
   while(T--){
      int n, q;
      cin>>n>>q;
      factorize(n);
      for(auto prime:powers) original_divisors[prime.first]=prime.second;
      int original_divisor_count = divisor_count;
      vector<int>queries;
      for(int i = 0 ; i < q; i++){
	 int query_type;cin>>query_type;
	 if(query_type==1){
	    int x; cin>>x; factorize(x);
	    queries.push_back(x);
	    long long num=n;
	    for(int query:queries) num*=query, num%=divisor_count;
	    if(num==0) cout <<"YES\n";else cout <<"NO\n";
	 }else{
		 powers.clear();
		 for(auto original_div:original_divisors) powers[original_div.first]=original_div.second;
		 divisor_count = original_divisor_count;
		 queries.clear();
	 }
      }
      original_divisors.clear(); powers.clear(); divisor_count=1;original_divisor_count=1;
      cout <<endl;
   }
   return 0;
}
