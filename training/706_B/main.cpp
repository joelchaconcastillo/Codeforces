#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n, q;
   cin>>n;
   vector<int> x(n);
   for(auto &i:x)cin>>i;
   sort(x.begin(), x.end());
   cin >> q;
   for(int i = 0 ; i < q; i++){
       int coins;
       cin>>coins;
       cout <<  upper_bound(x.begin(), x.end(), coins)-x.begin()<<endl;
   }
}
int main(){
  solve();
  return 0;
}
