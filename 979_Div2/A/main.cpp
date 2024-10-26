#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;cin>>T;
   while(T--){
      int n;cin>>n;
      int minv=INT_MAX, maxv=INT_MIN;
      
      for(int i = 0 ;i < n ;i++){
	      int ai;cin>>ai;
	      minv=min(ai, minv);
	      maxv=max(ai, maxv);
      }
      if(n==1)cout << 0<<endl;
      else cout << (n-1)*(maxv-minv)<<endl;
   }
   return 0;
}
