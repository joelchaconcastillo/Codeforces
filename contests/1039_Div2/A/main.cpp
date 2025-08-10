#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long n,c;
	cin>>n>>c;
	vector<long long> bags(n);
	long long minv = INT_MAX;
	for(int i = 0 ; i < n; i++){
		cin>>bags[i];
		minv = min(minv, bags[i]);
	}
	int chosen=0;
	while(minv <= c && chosen < n){
		long long maxv = INT_MIN, idx=-1;
		for(int i = 0 ;i  < n; i++){
			if(bags[i] <= c && maxv < bags[i]){
				maxv = bags[i];
				idx=i;
			}
		}
		if(idx==-1)break;
		chosen++;
		bags[idx]=INT_MAX;
		c/=2;
	}
	cout << n-chosen<<endl;
	/*
	   10 30
	   29 25 2 12 15 42 14 6 16 9
	    *    *     *       *
	 3
	 ans=6
	 * */
}
int main(){
	ios::sync_with_stdio(NULL);
	cin.tie(0);
        int T;
	cin>> T;
	while(T--){
		solve();
	}
	return 0;
}
