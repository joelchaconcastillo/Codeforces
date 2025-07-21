#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n, m;
	cin >> n >> m;
	if(n == 1 || m == 1) cout <<"NO\n";
	else if(n==2 && m==2) cout << "NO\n";
	else cout <<"YES\n";
}
int main(){
        int T; cin>> T;
	while(T--){
	   solve();
	}
	return 0;
}
