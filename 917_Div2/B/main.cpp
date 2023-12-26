#include <bits/stdc++.h>
using namespace std;
set<string> memo;
void helper(string &st){
    if(st.empty()) return;
    if(memo.find(st)!=memo.end())return;
    memo.insert(st);
    long long val = 0;
    //remove first..
    auto v1 = st.back();
    st.pop_back();
    helper(st);
    if(st.size()>0){
       //remove second
       auto v2 = st.back();
       st.pop_back();
       st.push_back(v1);
       helper(st);
       st.pop_back();
       st.push_back(v2);
    }
    st.push_back(v1);
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
      int n;
      memo.clear();
      cin>>n;
      string st;
      cin>>st;      
      vector<int> dp(n+1, 0);
      dp[0]=1;
      if(st[0]==st[1])dp[1]=dp[0];
      else dp[1] = dp[0]+1;
      for(int i = 2; i <= n; i++){
      }
      cout <<dp[n-1]<<" "<<dp[n]<<endl;
//      reverse(st.begin(), st.end());
//      helper(st);
//      cout <<memo.size()<<endl;
   }
   return 0;
}
