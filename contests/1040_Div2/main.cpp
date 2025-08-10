#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i = 0 ; i < n; i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	int score = 0;
	//   0 0 1 1
	//   2*min(count 0, count 1)
	//   count 0 - min(count(0), count 1)
	//
	//   1 2 3 4
	//         i
	//   2 0 4 5
	//   1 3 6 10
	int ones = 0, zeros = 0;
	for(int i = 0; i < n; i++){
		if(a[i]==0)zeros++;
		else if(a[i] == 1) ones++;
		else score += a[i];
	}
	int res = 0, delta = min(ones, zeros);
	res = score + 2*delta +  zeros-delta+ones-delta;
	cout << res<<endl;

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
