#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
     int n;cin>>n;
     vector<int> bits(2*n);
     int onC = 0, offC = 0;
     for(auto &i:bits){
	     cin>>i;
	     if(i==0)offC++;
	     else onC++;
     }
     int minv = onC%2;
     cout << minv << " "<<min(onC, offC)<<endl;
   }
   return 0;
}
