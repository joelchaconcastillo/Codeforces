#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin >> T;
   while(T--){
     int n; cin>>n;
     vector<int> val(n, 0);
     for(int i = 0 ; i < n; i++){
	 cin>>val[i];
     }
     sort(val.begin(), val.end());
     cout << val[n/2]<<endl;
   }
   return 0;
}
