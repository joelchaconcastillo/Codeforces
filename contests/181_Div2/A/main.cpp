#include <bits/stdc++.h>
using namespace std;
void solve(){
	string st;
	cin>>st;
	sort(st.begin(), st.end(), [](char a, char b){
			 return a>b;
			});
	cout <<st<<endl;
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
