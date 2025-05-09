#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--){
     int n;
     cin>>n;
     vector<int> a(n);
     for(auto &i:a)cin>>i;
     int maxv=INT_MIN;
     for(int i = 0; i < n; i+=2){
	     maxv = max(maxv, a[i]);
     }
     cout << maxv<<endl;
   }
   return 0;
}
