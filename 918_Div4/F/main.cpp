#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
      int n;
      cin>>n;
      vector<pair<long long, long long>>ab(n);
      for(int i = 0 ; i < n ; i++){
	  cin>>ab[i].second>>ab[i].first;
	  ab[i].first = -ab[i].first;
	  ab[i].second = -ab[i].second;
      }
      sort(ab.begin(), ab.end());
      long long t0 = ab.front().first, res=0;
      priority_queue<long long>pq;
      for(int i = 0 ; i< n ; i++){
	 long long elapsed = ab[i].first - t0;
	 ab[i].first= min(ab[i].first + elapsed, ab[i].second);
	 while(!pq.empty() && -pq.top() < ab[i].first) pq.pop();
	 res += pq.size();
	 pq.push(-ab[i].second);
      }
      cout << res <<endl;
   }
   return 0;
}
