#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T, l, k;
   cin >> T;
   for(int t = 0; t < T; t++){
      int n,q;
      cin>>n;
      vector<int> ai(n);
      vector<vector<int>>pref(n+2, vector<int>(30));
      for(int i = 0 ; i < n; i++)cin>>ai[i];
      //prefx..
      for(int i = 0; i < n; i++){
	 for(int j=0; j < 30; j++){
	     pref[i+1][j] = pref[i][j];
	     if(ai[i]&(1<<j)) pref[i+1][j]++;
	 }
      }
      cin>>q;
      while(q--){
	 cin>>l>>k;
	 if(ai[l-1] < k){
	      cout << -1 <<" ";continue;
	 }
	 int lo=l, hi=n, ans=l;
	 while(lo<=hi){
	      int m=(lo+hi)/2, num=0;
	      for(int j = 0; j < 30; j++){
		 if(pref[m][j] - pref[l-1][j] == m-l+1)num+=(1<<j);
	      }
	      if(num>=k) lo=m+1, ans=max(ans, m);
	      else hi=m-1;
	 }
	 cout << ans<<" ";
      }
      cout << endl;
   }
   return 0;
}
