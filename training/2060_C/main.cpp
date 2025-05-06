#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n, k;cin>>n>>k;
   vector<int>a(n);
   for(int i = 0 ; i < n ;i++){
	   cin >> a[i];
   }
   unordered_map<int, int> counter;
   int res = 0;
   for(int i = 0 ; i < n; i++){
      int target = k-a[i];
      if(counter.count(target) && counter[target]>0){
	 counter[a[i]]--;
	 counter[target]--;
	 res++;
      }
      counter[a[i]]++;
   }
   cout << res<<endl;
}
int main(){
  int T; cin>>T;
  while(T--){
	 solve();
  }
  return 0;
}
/*
  4 2
  1 1 1 1 1 3
          a b
  16 9

  1 1 2 3 3 3 4 5 5 5 6 7 8 9 9 9
  x                       x
                          i
		1 2 3
*/
