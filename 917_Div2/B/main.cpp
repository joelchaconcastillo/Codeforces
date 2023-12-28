#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T; cin>>T;
   while(T--){
      int n; cin>>n;
      string s; cin>>s;
      map<char, int> counter;
      int add=0, res=0;
      for(int i=0; i < n; i++){
	      counter[s[i]]++;
	      if(counter[s[i]]==1) res+=(n-i);
      }
      cout<<res<<endl;
   }
   return 0;
}
