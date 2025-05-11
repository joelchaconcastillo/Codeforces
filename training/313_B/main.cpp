#include <bits/stdc++.h>
using namespace std;
void solve(){
   string st;
   cin>>st;
   vector<int> prefix(st.size()+1,0);
   for(int i = 0; i < st.size(); i++){
	 int delta=0;
	 if(i+1<st.size() && st[i]==st[i+1])delta=1;
	 prefix[i+1] = prefix[i]+delta;
   }
   int m;cin>>m;
   for(int i = 0 ; i< m ;i++){
      int l, r;
      cin >> l >> r;
//      l--, r--;
      cout << prefix[r-1]-prefix[l-1]<<endl;
   }
}
int main(){
  solve();
  return 0;
}
/*
     # . . # # #
   0 0 1 1 2 3 3
   0 0 1 1 2 3 3
 * */
