#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct DSU{
   vector<int> p, sz;
   vector<long long> score;
   DSU(int n){
      p.assign(n, 0);
      sz.assign(n, 1);
      score.assign(n, 0);
      for(int i = 0 ; i <n; i++)p[i]=i;
   }
   int find(int u){
       return (p[u]==u)?u:(p[u]=find(p[u]));
   }
   void unite(int u, int v){
      u = find(u);
      v = find(v);
      if(u==v)return ;
      if(sz[u] < sz[v]) swap(u,v);
      p[v]=u;
      sz[u] += sz[v];
      score[u] +=score[v];
   }
   bool same(int u, int v){ return find(u)==find(v);}
   int size(int u){
      u = find(u);
      return sz[u];
   }
};
void solve(){
   int n;
   cin>>n;
   string st;
   cin>>st;
   DSU dsu(2*n);
   vector<array<int, 2>>prev;
   for(int i = 0 ; i <n; i++){
      if(st[i]=='1'){
	 dsu.score[2*i] = 1;
	 dsu.unite(2*i, 2*i+1);
	 for(int j = 0; j < prev.size(); j++){
	    int l = prev[j][0];
	    int r = prev[j][1];
	    if( i>=l && i<=r) dsu.unite(2*i, 2*(i-1)+j);
	 }
	 prev = {{i,i}};
	 continue;
      }
      vector<array<int, 2>>next = {{0,i-1},{i+1,n-1}};
      for(int j = 0; j < next.size(); j++){
	  auto [l,r] = next[j];
	  dsu.score[2*i+j] = r-l+1;
      }
      for(int j = 0 ; j < prev.size(); j++){
	  for(int k = 0 ; k < next.size(); k++){
	     auto [l1, r1] = prev[j];
	     auto [l2, r2] = next[k];
	     if( l2 > r1 || r2 < l1) continue;
	     dsu.unite(2*i+k, 2*(i-1)+j);
	  }
      }
      prev = next;
   }
   long long res = 0;
   for(int i = 0 ; i < 2*n; i++){
	   res = max(res, dsu.score[i]);
   }
   cout << res <<endl;
}
int main(){
  int T;
  cin>>T;
  while(T--){
	 solve();
  }
  return 0;
}
