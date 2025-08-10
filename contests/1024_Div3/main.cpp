#include <bits/stdc++.h>
using namespace std;
int hasChecker(vector<int> &a, vector<int> &b){
	for(int i = 0 ; i < a.size(); i++){
		if(a[i] > b[i])return i;
	}
	return -1;
}
void solve(){
	int n;cin>>n;
	vector<int>a(n), b(n);
	for(int i = 0 ;i  < n ; i++){
		cin>>a1[i];
	}
	for(int i = 0 ;i  < n ; i++){
		cin>>b[i];
	}
	int res = 0, idx;
	while((idx = hasChecker(a,b,))!=-1){

	}
	cout << res <<endl;
}
int main(){
  int T;
  cin>>T;
  while(T--){
	  solve();
  }
  return 0;
}
