#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n; cin >> n;
   vector<int> a(n);
   unordered_map<int, int> alicia, bob, freq;
   for(auto &i:a){
	   cin>>i;
	   freq[i]++;
   }
   priority_queue<tuple<int, int>, vector<tuple<int, int>> , greater<>>pq;
   for(auto ii:freq) pq.push({ii.second, ii.first});
   int i=0;
   while(!pq.empty()){
	auto [cont, item] = pq.top(); pq.pop();
	if(i%2==0) alicia[item]++;
	else bob[item]++;
	cont--;
	if(cont>0)pq.push({cont, item});
	i++;
   }
   int res = alicia.size();
   for(auto ii:alicia){
      if(bob.count(ii.first)==0)res++;
   }
   cout << res<<endl;

}
int main(){
   int T; cin >> T;
   while(T--) solve();
   return 0;
}
