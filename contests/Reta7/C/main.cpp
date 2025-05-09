/*
 *   1,2,3,4,5,6,7
 *
 *    k*(k+1)/2  <= x <= n*(n+1)/2
 *
 *    
 *
 * */
#include <bits/stdc++.h>
using namespace std;

int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin >> T;
   for(int t = 0; t < T; t++){
      long long n, k, x;
      cin >> n >> k >> x;

      if(2*x>=k*(k+1) && 2*x <= n*(n+1)-(n-k)*(n-k+1)) cout << "YES"<<endl;
      else cout <<"NO"<<endl;
   }
   return 0;
}
