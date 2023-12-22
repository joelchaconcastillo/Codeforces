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
      vector<pair<long long, int>> ai(n);
      for(int i = 0 ; i< n ; i++){
         cin>>ai[i].first;
         ai[i].second=i;
      }
      sort(ai.begin(), ai.end());
      vector<long long> res(n), dp(n+1);
      dp.back()=INT_MAX;
      dp.front() = ai.front().first;
      for(int i = 1; i< n; i++) dp[i] = dp[i-1]+ai[i].first;
      for(int i = 0 ; i < n; i++){
         int ii = i;       
         auto v = dp[ii];
         while(true){
           int jj = upper_bound(dp.begin(), dp.end(), ai[ii].first)-dp.begin();
           if(jj==ii || jj == n)break;
           ii=jj;
         }
         res[ai[i].second] = ii;
      }
      for(auto ii:res)cout << ii<<" ";
      cout<<endl;
   }
   return 0;
}

