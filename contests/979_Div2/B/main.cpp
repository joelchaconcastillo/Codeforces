#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;cin>>T;
   while(T--){
     int n;cin>>n;
     string ans="";
     for(int i = 0 ;i<n; i++) ans += (i+1<n)?"0":"1";
     cout << ans<<endl;
   }
   return 0;
}
