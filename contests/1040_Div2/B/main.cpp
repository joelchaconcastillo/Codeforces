#include <bits/stdc++.h>
using namespace std;
//it must contain 0,1,2
//find a sequence where s can not be achieved
void solve(){
	int n,s;
	cin >> n >> s;
	vector<int> a(n);
	// ...... 0 1 1 any
	// ...... 0 1 2
	// ...... 0 2 1
	int sum = 0, zeros=0, ones=0, twos=0;
	for(int i = 0 ;i  <n ;i++){
		cin>>a[i];
		if(a[i]==0)zeros++;
		if(a[i]==1)ones++;
		if(a[i]==2)twos++;
		sum+=a[i];
	}
	if(sum+2 <= s || s==sum){
		cout << -1<<endl;
		return;
	}
		vector<int> vals;
		for(int i = 0; i<zeros; i++)vals.push_back(0);
		for(int i = 0; i<twos; i++)vals.push_back(2);
		for(int i = 0; i<ones; i++)vals.push_back(1);
		for(int i = 0 ;i  < n ; i++) cout <<vals[i]<<" ";
		cout <<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		solve();
	}
	return 0;
}
/*
  0 F
  1 F
  2 F
  3 T -->0
  4 F    1
  5 T    2
  6 T    3
  7 T    4
  1 0 2


 * */
