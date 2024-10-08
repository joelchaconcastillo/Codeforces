#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin >>T;
   while(T--){
      int n;
      cin>>n;
      vector<int> a(n);
      int minv = INT_MAX;
      for(auto &i:a){cin>>i; minv = min(minv, i);}
      vector<int> b;
      int minvB=INT_MAX;
      for(auto i:a){
	 if(i%minv!=0){ b.push_back(i); minvB=min(minvB, i);}
      }
      bool hasSol = true;
      for(auto i:b){
	 if(i%minvB!=0){ hasSol=false; break;}
      }
      if(hasSol) cout << "YES\n";
      else cout << "NO\n";
   }
   return 0;
}
