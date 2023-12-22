#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin >> T;
   int n;
   for(int t = 0; t < T; t++){
      int n;
      cin>>n;
      for(int i = 1,k=0 ; k< n; i+=2,k++) cout << i<< " ";
      cout<<endl;
   }
   return 0;
}
