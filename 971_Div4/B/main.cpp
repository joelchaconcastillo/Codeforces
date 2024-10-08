#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--){
      int n;cin>>n;
      vector<string> g(n);
      for(int i = 0; i<n; i++) cin >> g[i];
      for(int i = n-1; i>=0; i--){
	  int c = 0;
	  for(int j = 0 ; j < g[i].size();j++) if(g[i][j]=='#')c=j+1;
	  cout << c<<" ";
      }
      cout<<endl;

   }
   return 0;
}
