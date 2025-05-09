#include <iostream>
#include <unordered_set>
//#include <bits/stdc++.h>
using namespace std;
int solve(){
   int n;
   cin >> n;
   unordered_set<int> A(n);
   for(int i = 0 ; i < n; i++){
	int x;
	cin>>x;
	A.insert(x);
   }
   return A.size();
}
int main() {
    int T;
    cin >> T;
    while (T--) {
	  cout << solve()<<endl;
    }
    return 0;
}

