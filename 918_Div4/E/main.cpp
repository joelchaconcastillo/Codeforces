#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
      int n;
      cin>>n;
      vector<long long>a(n), b(n)
      for(int i = 0 ; i < n ; i++) cin>>a[i];
      long long sumodd=0, sumeven=0;
      for(int i = 0 ;i < n ; i++){
	 if(i%2==0)sumeven+=a[i];
	 else sumodd+=a[i];
	 b[i] = sumodd-sumeven;
      }
      for(int i = 0 ; i < n; i++){
	 
      }

   }
   return 0;
}
