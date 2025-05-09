#include <bits/stdc++.h>
using namespace std;
const long long inf=1e18;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
      int n, m; cin >> n >> m;
      vector< vector<pair<int, long long>> > adj(n);
      for(int i = 0 ; i < m; i++){
         int u, v; cin >> u >> v;
         long long w;cin>>w;
         u--,v--;
         adj[u].emplace_back(v,w);
         adj[v].emplace_back(u,w);
      }
      vector<long long> s(n);
      for(int i = 0 ; i < n; i++) cin>>s[i];
      vector<vector<long long>> dist(n, vector<long long> (1001, inf));
      vector<vector<bool> > marked(n, vector<bool> (1001, false));
      dist[0][s[0]]=0; //first
      priority_queue<array<long long, 3>> pq; 
      pq.push({0, 0, s[0]});
      while(!pq.empty()){
         auto [__, u, k] = pq.top(); pq.pop();
         if(marked[u][k] || dist[u][k]==inf) continue;
         marked[u][k]=true;
         for(auto [v, w]:adj[u]){
            int c = min(s[v], k);
            if(dist[v][c] <= dist[u][k]+1LL*w*k) continue;
            dist[v][c] = dist[u][k]+1LL*w*k;
            pq.push({-dist[v][c],v,c});
         }
      }
      long long ans = inf;
      for(int i = 1; i <=1000; i++) ans = min(ans, dist[n-1][i]);
      cout << ans<<endl;
   }
   return 0;
}