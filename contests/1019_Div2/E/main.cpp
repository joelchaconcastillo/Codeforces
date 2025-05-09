#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <tuple>
using namespace std;
const int maxn = 2e5+5;
int n, k, arr[maxn], A, B, p[maxn];
map<int, int> pos;
vector<tuple<int, int, int> > V;
void do_operation(int a, int b, int x){
  arr[a] -=x;
  arr[b] +=x;
  V.push_back({a,b,x});
}
void setvalue(int pos ,int b, int target){
  if(arr[pos]==target) return;
  int dif = target-arr[pos];
  do_operation(b,pos, dif);
}
void _swap(int x, int y){
  int vx = arr[x], vy = arr[y];
  setvalue(A,B,k-vx);
  setvalue(x,A,vy);
  setvalue(y,A,vx);
}
bool cmp(int a, int b){
   return arr[a]<arr[b];
}
void solve(){
   pos.clear();
   V.clear();
   A=B=-1;
   cin>>n>>k;
   for(int i =1 ; i <=n; i++)cin>>arr[i];

   bool issorted=true;
   for(int i = 2 ;i<=n; i++){
      if(arr[i] < arr[i-1]) issorted=false;
   }
   if(issorted){
      cout << "0\n";
      return;
   }

   for(int i=1; i<=n; i++){
      if(pos.find(k-arr[i])!=pos.end()){
	     B=i; A=pos[k-arr[i]];
	     break;
      }
      pos[arr[i]]=i;
   }
   if(A==-1){
	   cout << "-1\n";
	   return;
   }
   if(A!=1){
	  setvalue(A,B,k-arr[1]);
	  setvalue(1,A,k-arr[B]);
	  A=1;
   }
   if(B!=n){
	   setvalue(B,A,k-arr[n]);
	   setvalue(n,B,k-arr[A]);
	   B=n;
   }
   vector<int> invp;
   for(int i = 2; i<n; i++)invp.push_back(i);
   sort(invp.begin(), invp.end(), cmp);
   for(int i = 0 ; i<invp.size(); i++)
	   p[invp[i]]=i+2;
   for(int i = 2; i<n; i++){
	if(p[i]==i)continue;
	_swap(p[i], i);
	swap(p[p[i]],p[i]);
	i--;
   }
   setvalue(B,A,k);
   cout << V.size() << "\n";
   for(auto [a,b,x]:V)
	   cout << a<<" "<<b<<" "<<x<<"\n";
   return;
}
int main(){
  int T;
  cin>>T;
  while(T--){
	 solve();
  }
  return 0;
}
