#include <bits/stdc++.h>
using namespace std;
const long long L  = 2*3*5*7;
bool isGood(long long x){
	return x%2 != 0 && x%3!=0 && x%5!=0 && x%7!=0;
}
long long count(long long i){
	long long res = 0;
	for(long long x=0; x<i; x++){
		res += isGood(x);
	}
	return res;
}
long long get(long long i){
	// number of segments * number of good int on segment + remainder nums;
	// |-----|----|----|----|---
	//                      |=R=| 
	return (i/L)*count(L)+count(i%L);
}
void solve(){
	long long l,r;
	cin >> l >> r;
	cout << get(r+1)-get(l)<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		solve();
	}
	return 0;
}
