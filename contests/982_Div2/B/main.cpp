#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;cin>>T;
   while(T--){
      int n; cin>>n;
      vector<long long> A(n);
      for(int i = 0 ;i  < n; i++){
	     cin>>A[i];
      }
      int res=INT_MAX;
      for(int i = 0; i < n; i++){
	 int cont = i;
	 for(int j = i; j < n; j++){
		 cont+=(A[i]<A[j]);
	 }
	 res = min(res, cont);
      }
      cout << res<<endl;
   }
   return 0;
}
/*
   *     *  
   3 6 4 9 2 5 2

   2 2 3 4 5 6 9
             x x
  
  non-increaing after applying st-sort 
  * * * *
  6 8 9 10 12 9 7 5  4

  4 5 6 7  8  9 9 10 12
           l  x x  x   x

  
  3 6 4 9 2 4 2
  
  2 2 3 4 4 6 9

  10 10 6 6 4 4 2 2
  

  * */
