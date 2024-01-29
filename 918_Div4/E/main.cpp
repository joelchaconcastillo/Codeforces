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
      vector<long long>a(n);
      for(int i = 0 ; i < n ; i++) cin>>a[i];
      long long sum=0;
      map<long long, long long> count;
      bool hasSol=false;
      count[0]=1;
      for(int i = 0 ; i < n; i++){
         sum += a[i]*(  (i%2==0)?1LL:-1LL );
         if(count[sum]){
            hasSol=true;
            break;
         }
         count[sum]++;
      }
      if(hasSol) cout << "YES\n";
      else cout << "NO\n";
   }
   return 0;
}
