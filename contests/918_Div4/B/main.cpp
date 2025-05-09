#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
      int n=3;
      char missing=' ';
      for(int i = 0 ; i < n; i++){
	      string st;
	      cin>>st;
	      sort(st.begin(), st.end());
	      for(char ii='A'; ii<='C'; ii++)
		      if(st[ii-'A']!=ii)missing=ii;
      }
      cout << missing<<endl;
   }
   return 0;
}
