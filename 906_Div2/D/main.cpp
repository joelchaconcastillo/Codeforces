
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   for(int t=1 ; t <=T; t++){
      long long n, c;
      cin>>n>>c;
      vector<long long> a(n), p(n);
      for(int i = 0 ; i < n; i++){
	      cin>>a[i];
	      p[i]=i;
      }
      sort(p.begin(), p.end(), [&] (const int &u, const int &v){
		      return (1LL*(u+1LL)*c - a[u]) < (1LL*(v+1LL)*c - a[v]);
           });
      bool hassol=true;
      long long sum = a.front(); //we already have the first one!
      for(int i = 0 ; i < n && hassol; i++){
	      int u = p[i];
	      if(u==0)continue; //skip first node
	      if((u+1LL)*c > sum+a[u]) hassol=false;
	      sum +=a[u];
      }
      if(hassol)cout<<"YES\n";
      else cout<<"NO\n";
   }
   return 0;
}
