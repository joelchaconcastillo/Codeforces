#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n; cin >> n;
   vector<int> a(n);
   for(auto &i:a)cin >> i;
   bool hasSol = true;
   for(int i = 0 ; i<n; i++){
       //if(a[i] <= 2*i || a[i] <= 2*(n-i-1)){
       if(a[i] <= 2*max(i, n-i-1)){
	       hasSol=false;
	       break;
       }
   }
   if(hasSol)cout << "YES\n";
   else cout <<"NO\n";
}
int main(){
  int T; cin >>T;
  while(T--){
	  solve();
  }
  return 0;
}
