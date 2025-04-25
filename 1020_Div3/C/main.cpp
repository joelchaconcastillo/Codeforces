#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
using namespace std;
void solve(){
   int n, k;
   cin>>n >> k;
   vector<int> A(n), B(n);
   for(int i = 0 ; i< n ;i++)cin>>A[i];
   for(int i = 0 ; i< n ;i++)cin>>B[i];
   unordered_set<int> values_on_B_A;
   for(int i = 0; i < n; i++){
	 if(B[i]!=-1) values_on_B_A.insert(B[i]+A[i]);
   }
   if(values_on_B_A.size() > 1){ //no possible
	   cout << 0 <<endl;
	   return;
   }
   if(values_on_B_A.size() == 1){
	int target_sum = *values_on_B_A.begin();
	for(int i = 0; i < n; i++){
		if(B[i] == -1){ // A+B == target_sum --> B = target_sum-A, B<=k
		    int bp = target_sum-A[i];
		    if(bp<0 || bp > k){
		      cout << 0 <<endl;
		      return;
		    }
		}
	}
	cout << 1<<endl;
	return;
   }
   int minv = INT_MAX, maxv=INT_MIN;
   for(int i = 0 ; i <n ;i++){
	   if(k-A[i]>=0){
	     minv = min(minv, A[i]);
	     maxv = max(maxv, A[i]);
	   }else{
		   cout << 0<< endl;
		   return;
	   }
   }
   // 0 <= Bi <= K
   // Ai+Bi = x 
   // x?
   // minv(A) <= x <= max(A)+K
   // max(A) <= x since k>=0
   // max(A) <= x <= max(A)+k
   // x <= min(A) +k
   // max(A) <= x <= min(A)+k
   // min(A)+k - max(A)
   // 5 10
   // 1 3 2 5 4
   // 5 <= x <= 11

   int res = minv+k-maxv+1;
   if(res==INT_MAX){
	   cout << 0 <<endl;
	   return;
   }
   cout << res <<endl;
   //all values in B are -1
   // A = {1,2,3}, B = {-1,-1,-1}
   // Ai+Bi <= K --> Bi <= K-Ai
}

int main(){
  int T;
  cin>>T;
  while(T--){
	 solve();
  }
  return 0;
}
/*
 5 10
 1 3 2 5 4
 9 7 8 5 6

       *--> 5 6 7 8 9 10
-1 -1 -1 -1 -1
 * */
