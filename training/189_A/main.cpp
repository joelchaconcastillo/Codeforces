#include <bits/stdc++.h>
#define INT_MIN -10000000
using namespace std;
map<int, int>memo;
int dp1(int rem, vector<int> &a){
      if(rem < 0)return INT_MIN;
      if(rem == 0)return 0;
      if(memo.count(rem))return memo[rem];
      int res = INT_MIN;
      for(auto next:a){
	   res = max(res, dp1(rem-next, a)+1);
      }
      return memo[rem] = res;
}
void solve(){
   int n, a, b, c;
   cin>>n>>a>>b>>c;
   vector<int> arr = {a,b,c, a, a, a};
   vector<int> dp(n+1, INT_MIN);
   dp[0]=0;
   for(auto i:arr){
	 for(int current = i; current <=n; current++){
	      if(dp[current-i]==INT_MIN)continue;
	      dp[current]  = max(dp[current], dp[current-i]+1);
	 }
   }
   cout << dp[n]<<endl;
}
int main(){
  solve();
  return 0;
}
/*
   f(n) = 
           f(n-a[i]) iff n in a
   7 
   5 5 2
   0 1 2 3 4 5 6 7
   1 0 1 0 1 2 1 2 

   5 5 3 2
       * *   *
   0 1 2 3 4 5
   2 1 0 0 0 0
   3
   5

*/
