#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve(){
   int n, x;
   cin>>n >> x;
   vector<int> A(n);
   int idx=0;
   for(int i = 0 ; i < n; i++){
	 A[i] = i;
   }
   x = min(n-1, x);
   swap(A[x], A[n-1]);
   for(auto i:A)cout <<i <<" ";
   cout <<endl;
}
int main(){
  int T;
  cin>>T;
  while(T--){
	 solve();
  }
  return 0;
}
