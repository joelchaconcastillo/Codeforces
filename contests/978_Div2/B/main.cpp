#include <bits/stdc++.h>
using namespace std;
int main(){
   int T; cin>>T;
   while(T--){
      long long n, x;cin>>n>>x;
      vector<long long> countModels(n);
      priority_queue<long long> pq;
      long long res = 0;
      for(auto &i:countModels){
	      cin>>i;
	     if(i!=0) pq.push(i);
      }
      while(!pq.empty()){
	  vector<long long> cu;
	  while(cu.size() < x && !pq.empty()){
		  if(pq.top() != 0)
		  cu.push_back(pq.top());
		  pq.pop();
	  }
	  long long minv = cu.back();
	  res +=minv;
	  for(auto &i:cu){
	     if(i-minv > 0)pq.push(i-minv);
	  }
      }
      cout << res <<endl;
   }
   return 0;
}
