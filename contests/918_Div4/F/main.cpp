#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std; 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
      int n; 
      cin>>n;
      vector<pair<int, int>>a(n);
      for(int i = 0 ; i < n ; i++)  cin>>a[i].second>>a[i].first;
      sort(a.begin(), a.end());
      long long counter = 0;
      ordered_set as;
      for(int i = 0 ; i < n; i++){
         counter += as.size() - as.order_of_key(a[i].second);
         as.insert(a[i].second);
      }
      cout << counter<<endl;
   }
   return 0;
}
