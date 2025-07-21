#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	long long res =0 ;
	for(int i = 0; i < n; i++){
	   long long a,b,c,d;
	   cin >> a >> b>>c>>d;
	   if(b<=d){
		   res += max(0LL, a-c);
	   }else{
		   res +=a;
		   res +=max(0LL, b-d);
	   }
	}
	cout << res<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
        int T; cin>> T;
	while(T--){
	   solve();
	}
	return 0;
}
