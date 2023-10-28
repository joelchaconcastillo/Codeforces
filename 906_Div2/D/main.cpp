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
      vector<long long> npeople(n);
      long long total=0;
      for(auto &i:npeople){
	      cin>>i; total+=i;
      }
      vector<bool>marked(n+1, false);
      priority_queue<pair<long long, long long> >q; q.push({0LL,1});
      int used=0;
      long long cost=0;
      while(!q.empty()){
	   auto node = q.top();q.pop();
	   if(marked[node.second])continue;
	   marked[node.second]=true;
	   used++;
	   cost += -node.first;
	   for(int _to = 1; _to <= n; _to++){
	      if(marked[_to])continue;
	      if(1LL*node.second*_to*c > total)continue;
	      q.push({-(node.second*_to), _to});
	   }
      }
      if(used==n)cout<<"YES\n";
      else cout <<"NO\n";
   }
   return 0;
}
