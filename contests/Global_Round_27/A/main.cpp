#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
     long long n, m, r, c; cin >> n >> m >> r >> c;
     long long res = 0;
     res = m*(n-r) + (n*m)-((r-1)*m+c) - (n-r);
     cout << res <<endl;
   }
   return 0;
}
/*
   n = 2, m = 3, r=1, c=2;
 A  m*(n-r) -- > 3*(2-1) =  +3
 B  (n*m) = 6 
 C  (r-1)*m+c = 2
 D  n-r = 1
 A+B-C = 7

 * */
