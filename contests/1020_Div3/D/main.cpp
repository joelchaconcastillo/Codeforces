#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve(){
   int n, m;
   cin>>n>>m;
   vector<int> a(n), b(m);
   for(int i = 0 ; i < n; i++){
	   cin >> a[i];
   }
   for(int i = 0 ; i < m; i++){
	   cin >> b[i];
   }
   vector<int> pref(m), suffix(m);
   int j = n-1;
   for(int i = m-1; i>=0; i--){
      while(j >=0 && a[j] < b[i])j--;
      suffix[i] = j--;
   }
   j = 0;
   for(int i = 0 ; i < m; i++){
      while(j<n && a[j] < b[i])j++;
      pref[i] = j++;
   }
   if(pref.back()<n){
	 cout << 0 <<endl;
	 return;
   }
   int res = INT_MAX;
   for(int i = 0; i < m; i++){
      int match_prefix, match_suffix;
      if(i==0) match_prefix = -1;
      else match_prefix = pref[i-1];
      if(i+1==m) match_suffix = n;
      else match_suffix = suffix[i+1];
      if(match_suffix > match_prefix) 
	      res = min(res, b[i]);
   }
   if(res == INT_MAX){
	   cout << -1<<endl;
	   return;
   }
   cout << res <<endl;
}
int main(){
  int T;
  cin>>T;
  while(T--){
	 solve();
  }
  return 0;
}
