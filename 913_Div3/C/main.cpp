#include <bits/stdc++.h>
using namespace  std;
int helper(int idx, char last, int n, string &st){
   if(idx >= n) return 0;
   int res = 0;
   if(idx+1 < n && st[idx] != st[idx+1])  res = helper(idx+2, last, n, st)+1;
   res = max(res, helper(idx+1, st[idx], n, st));
   return res;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t = 0; t < T ; t++){
        string st;
        int s;
        cin>>s>>st;
        int res = helper(0, ' ', s, st);
        cout << s-2*res<<"--"<<res<<endl;
    }
    return 0;
}