#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	for(int t = 0 ; t < T; t++){
	   int n ;
	   cin>>n;
	   int cntneg=0, cntzero=0, cntpos=0;
	   priority_queue<pair<long long, int>>pq;
	   for(int i = 0 ; i < n ; i++){
	      long long ai;cin>>ai;
	      if(ai<0)cntneg++;
	      else if(ai==0)cntzero++;
	      else cntpos++;
	      pq.push({ai, i});
	      if(pq.size()>2)pq.pop();
	   }
	   if(cntneg%2==1 || cntzero > 0)cout <<0<<endl;
	   else{

	       cout <<1<<"\n" <<pq.top().second+1<<" "<<0<<endl;
	   }
	}

   return 0;
}
