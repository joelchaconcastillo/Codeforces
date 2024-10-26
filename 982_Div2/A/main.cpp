#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
      int n;
      cin>>n;
      vector<int> H(300);
      int maxw=0, maxh=0;
      for(int i = 0 ;i  < n; i++){
         int wi, hi; cin >>wi>>hi;
	 maxw = max(wi, maxw);
	 maxh = max(hi, maxh);
	 for(int jj = 0; jj<wi; jj++) H[jj]=max(H[jj], hi);
      }
      int minPer = maxh+maxw;
      for(int i = 0 ;i  < maxw; i++){
	 minPer++;
	 minPer+= H[i]-H[i+1];
      }
      cout << minPer<<endl;
   }
   return 0;
}
