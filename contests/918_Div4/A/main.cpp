#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T; cin>>T;
   while(T--){
     map<int, int> d;
     int a,b,c;
     cin>>a>>b>>c;
     d[a]++;d[b]++;d[c]++;
     if(d[a]==1)cout<<a<<endl;
     else if(d[b]==1) cout <<b<<endl;
     else cout << c <<endl;
   }
   return 0;
}
