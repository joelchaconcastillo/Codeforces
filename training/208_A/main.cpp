#include <bits/stdc++.h>
using namespace std;
void solve(){
  string st;
  cin >> st;
  int i = 0;
  string res = "";
  while(i<st.size()){
     if(st.substr(i,3) == "WUB"){
	     i+=3;
	     if(!res.empty() && res.back()!=' ')res+=" ";
     }
     else res+=st[i++];
  }
  while(!res.empty() && res.back()==' ')res.pop_back();
  cout << res<<endl;
}
int main(){
  solve();
  return 0;
}
