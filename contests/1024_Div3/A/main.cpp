#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>a(n), b(n);
	for(int i = 0 ;i  < n ; i++){
		cin>>a[i];
	}
	for(int i = 0 ;i  < n ; i++){
		cin>>b[i];
	}
	int res = 0;
	for(int i = 0 ;i < n; i++){
		res += max(0, a[i]-b[i]);
	}
	res++;
	cout <<res<<endl;
}
int main(){
  int T;
  cin>>T;
  while(T--){
	  solve();
  }
  return 0;
}
