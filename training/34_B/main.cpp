#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n, m;
   cin>>n>>m;
   vector<int> a(n);
   for(auto &i:a)cin>>i;
   sort(a.begin(), a.end());
   int res = 0, i=0;
   while(i<a.size() && a[i]<0 && i < m){
	   res += -a[i];
	   i++;
   }
   cout << res <<endl;
}
int main(){
   solve();
   return 0;
}
