#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin >> T;
   for(int t = 0; t < T; t++){
      int n, k;
      cin>>n>>k;
      bool feasible=false;
      for(int i = 0 ;i < n; i++){
         int d;cin>>d;
         if(d==k){
            feasible=true;
         }
      }
      if(feasible)cout<<"YES"<<endl;
      else cout <<"NO"<<endl;
   }
   return 0;
}
