#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool are_median_of_two_sub_arrays_valid(vector<int> &A, int n, int k){
  vector<int> sufix(n+1), min_sufix(n+1);
  sufix.back() = min_sufix.back() = A.back();
  for(int i = n-1; i >= 1; i--){
	  sufix[i] = sufix[i+1]+A[i];
	  min_sufix[i] = min(min_sufix[i+1], sufix[i]);
  }
  int current_sum = 0;
  for(int i = 1; i+2<=n; i++){
      current_sum += A[i];
      if(current_sum < 0) continue;
      if(sufix[i+1] >= min_sufix[i+2]) return true;
  }
  return false;
}
string solve(){
   int n, k;
   cin >> n >> k;
   vector<int> A(n+1);
   for(int i = 1; i <= n; i++){
	   cin >> A[i];
	   A[i] = (A[i]<=k)?1:-1;
   }
   int current_sum = 0, a = n+1, b = -1;
   for(int i = 1; i <= n; i++){ //get left positive prefix
      current_sum += A[i];
      if(current_sum>=0){
	      a = i;
	      break;
      }
   }
   current_sum = 0;
   for(int i = n; i>=1; i--){//get right positive suffix
       current_sum += A[i];
       if(current_sum>=0){
	      b = i;
	      break;
       }
   }
   if(a+1<b){//case 3: both medians left substring and right substring are positive
	return "YES\n";
   }
   if(are_median_of_two_sub_arrays_valid(A, n, k)) return "YES\n";
   //case 1 and 2 according editorial
   for(int i = 1 ; i < n-i+1; i++)//--> 2i-1 < n revert it to test case 2
      swap(A[i], A[n-i+1]);
   if(are_median_of_two_sub_arrays_valid(A, n, k)) return "YES\n";
   return "NO\n";
}
int main() {
    int T;
    cin >> T;
    while (T--) {
	  cout << solve();
    }
    return 0;
}


