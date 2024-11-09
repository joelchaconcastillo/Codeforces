#include <bits/stdc++.h>
using namespace std;


int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
	int n;cin>>n;
	if(n==1 || n==3){
		cout << -1 <<endl;
		continue;
	}
	string st="";
	if(n%2==1){
	  while(st.size()+5 < n) st+="33";
	  st+="363";
	}else{
	  while(st.size()+2<n) st+="33";
	}
	st+="66";
	cout <<st<<endl;
   }
   return 0;
}
