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
      long long sum=0;
      for(int i = 0 ; i < n; i++){
	      long long ai;
	      cin>>ai;
	      sum+=ai;
      }
      long long sq = sqrtl(sum);
      if(sq*sq==sum)cout <<"YES"<<endl;
      else cout <<"NO"<<endl;
   }
   return 0;
}
