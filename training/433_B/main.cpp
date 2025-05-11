#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin >> n;
  vector<long long> a(n);
  for(auto &i:a){
	  cin>>i;
  }
  auto a_sorted = a;
  sort(a_sorted.begin(), a_sorted.end());
  vector<long long> prefix1(n+1,0), prefix2(n+1,0);
  for(int i = 0; i <n; i++){
      prefix1[i+1] = prefix1[i]+a[i];
      prefix2[i+1] = prefix2[i]+a_sorted[i];
  }
  int m;cin>>m;
  while(m--){
	int type, l, r;cin>>type>>l>>r;
	if(type==1)
		cout << prefix1[r]-prefix1[l-1]<<endl;
	else
		cout << prefix2[r]-prefix2[l-1]<<endl;
  }
}
int main(){
   solve();
   return 0;
}
