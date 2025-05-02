#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve(){
   int n; cin >> n;
   long long res = 0;
   string st; cin >> st;
   st = " "+st;
   vector<long long> top(n+1,0), bottom(n+1,0);
   for(int i = 1; i <= n ;i++){
      if(st[i] == '1') top[i] = bottom[i-1]+1;
      else top[i] = top[i-1]+(i-1), bottom[i] = bottom[i-1]+(n-i);
      res = max(res, max(top[i], bottom[i]));
   }
   cout << res<<endl;
}
int main(){
   int T; cin>>T;
   while(T--){
	solve();
   }
   return 0;
}
