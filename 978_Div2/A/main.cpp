#include <bits/stdc++.h>
using namespace std;
int main(){
   int T; cin>>T;
   while(T--){
      int n, r;cin>>n>>r;
      vector<int> a(n);
      for(auto &i:a)cin>>i;
      int happy = 0, rem=0;
      for(auto &i:a){
	  happy += i/2;
	  rem += i%2;
      }
      r -= happy;
      happy *=2;
      if( rem >= r)
      happy +=  r-(rem-r);
      else happy+=rem;
      cout << happy<<endl;
   }
   return 0;
}
