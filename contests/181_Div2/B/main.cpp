#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long a,b,k;
	cin>>a>>b>>k;
	long long _gcd = __gcd(a,b);
	long long x = a/_gcd, y= b/_gcd;
	if(x<=k && y <=k)cout << 1<<endl;
	else cout << 2<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		solve();
	}
	return 0;
}
