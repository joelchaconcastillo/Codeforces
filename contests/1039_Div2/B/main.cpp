#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin>>n;
	vector<long long> p(n), q;
	for(int i = 0 ; i < n; i++) cin>>p[i];
	int l = 0, r = n-1;
	string res=""; int piv=0;
	while(l<=r){
		if(l==r){
			res +="L";
			break;
		}
		if(piv){//take lowest
			if(p[l]<p[r]){
				res +="L";
				l++;
			}else{
				res +="R";
				r--;
			}
		}else{//take larges
		      if(p[l]>p[r]){
			      res +="L";
			      l++;
		      }else{
			      res +="R";
			      r--;
		      }
		}
	        piv = 1-piv;	
	}
	cout << res<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
        int T;
	cin>> T;
	while(T--){
		solve();
	}
	return 0;
}
