#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T; cin>>T;
   while(T--){
      int n, k; cin>>n>>k;
      if(k==1 && n ==1){
	      cout <<1<<"\n"<<1<<endl;
	      continue;
      }
      if( k>1 && k<n){
	     cout  << 3 <<"\n"<<1<<" ";
	     if(k%2==0) cout <<k<<" "<<k+1<<endl;
	     else cout << k-1<<" "<<k+2<<endl;
      }else{
	    cout << -1<<endl;
      }
   }
   return 0;
}
