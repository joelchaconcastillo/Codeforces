#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+69, k = 19, bits=30;
vector<int> g[maxn];
int n, q, a[maxn], up[maxn][k], tin[maxn], tout[maxn], timer, d[maxn], r[maxn][k], bst[maxn][bits];

void dfs(int v, int p, vector<int> b){
   tin[v] = ++timer; //first time to visit node v
   up[v][0] = p; //retrieve parent of v node
   r[v][0] = a[p]; //assign parent's weight 
   d[v] = d[p]+1; //increase depth
   for(int i = 0; i < bits; i++){ //for each bit store the node if a bit is active
	 bst[v][i] = b[i];
	 if(a[v] & (1<<i)) b[i]=v;
   }
   for(int i = 1; i < k; i++){
      up[v][i] = up[up[v][i-1]][i-1];
      r[v][i] = r[v][i-1] | r[up[v][i-1]][i-1];
   }
   for(auto u:g[v]){ //go no neighbours...
      if(u != p) dfs(u, v, b); //avoid parent cycles...
   }
   tout[v]=timer;
}
bool is_anc(int u, int v){//check if node u is ancester of node v
   return tin[u] <= tin[v] && tout[u]>=tout[v];
}
int lca(int u, int v){//retrieve the lowest common ancester between u and v
   if(is_anc(u,v)) return u;
   else if(is_anc(v,u))return v;
   for(int i = k-1; i>=0; i--){
       if(!is_anc(up[u][i], v) && up[u][i]>0) u = up[u][i];
   }
   return up[u][0];
}
int OR(int u, int dis){
   int res = a[u];
   for(int j = 0 ; j < bits; j++)
      if(dis & (1<<j)) res |= r[u][j], u=up[u][j];
   return res;
}
int Qry(int u, int v){
   int lc = lca(u,v);
   return OR(u, d[u]-d[lc]) | OR(v, d[v]-d[lc]);
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
      cin>>n;
      timer = 0;
      for(int i = 1 ; i <= n; i++){
	 g[i].clear();
	 cin>>a[i];
      }
      for(int i =  1; i+1 <= n; i++){
	 int x,y;cin>>x>>y;
	 g[x].push_back(y); g[y].push_back(x);
      }
      vector<int> temp(30, -1);
      dfs(1, 0, temp);
      cin>>q;
      for(int i = 1 ; i <= q; i++){
	 int x, y;cin>>x>>y;
	 int LCA = lca(x, y);
	 vector<int> t;
	 t.push_back(x); t.push_back(y);
	 for(int i =  0 ; i<bits; i++){
            if(bst[x][i] != -1 && is_anc(LCA, bst[x][i])) t.push_back(bst[x][i]);
	    if(bst[y][i] != -1 && is_anc(LCA, bst[y][i])) t.push_back(bst[y][i]);
         }
	 long long ans = __builtin_popcount(a[x])+__builtin_popcount(a[y]);
	 for(auto p:t){
	    int x1 = a[x], x2 = a[y];
	    x1 |= Qry(x, p), x2 |= Qry(y, p);
	    ans = max(ans, 1ll*__builtin_popcount(x1)+__builtin_popcount(x2));
	 }
	 cout << ans<<" ";
      }
      cout <<endl;
   }
   return 0;
}
