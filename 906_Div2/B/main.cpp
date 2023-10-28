#include <bits/stdc++.h>
using namespace std;
bool isgood(string &t){
    for(int i = 0 ; i+1 < t.size(); i++){
       if(t[i] == t[i+1])return false;
    }
    return true;
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   for(int tt=1 ; tt <=T; tt++){
      int n, m;
      cin>>n>>m;
      string s, t;
      cin>>s>>t;
      if(isgood(s)){
	cout << "YES\n";continue;
      }
      if(!isgood(t)){
	cout << "NO\n";continue;
      }
      bool _2good=true;
      for(int i = 0 ; i+1 < s.size(); i++){
	 if(s[i]==s[i+1]){
	    if(s[i]==t.front() || s[i+1]==t.back()){
		    _2good=false;
		    break;
	    }
	 }
      }
      if(_2good)cout <<"YES\n";
      else cout <<"NO\n";
   }
   return 0;
}
