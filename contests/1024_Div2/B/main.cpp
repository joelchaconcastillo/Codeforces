#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin >> n;
  vector<int> a(n), a_abs(n);
  for(int i = 0 ;i < n; i++){
	  cin >> a[i];
	  a_abs[i] = abs(a[i]);
  }
  sort(a_abs.begin(), a_abs.end());
  int m = n/2, pos=0;
  for(int i = 0; i < n; i++){
     if(abs(a[0]) == a_abs[i]){
	     pos = i;
	     break;
     }
  }
  if( pos > m ){
	  cout << "NO\n";
  }else cout <<"YES\n";
}
int main(){
  int T;
  cin>> T;
  while(T--){
    solve();
  }
  return 0;
}
/* *
   m=1 , t = 4
   4 2 0 -5
   0 2 4 5 
   s = 2    
   n-s
    s > m
           *
   _ _ _ _ _ s _ _ 
   0 1 2 3 4 5 6 7


   1 1 1 1 1 1 
   _ _ _ _ _ _
   m     *        

 * */
