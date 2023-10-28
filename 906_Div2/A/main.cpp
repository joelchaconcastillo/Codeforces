#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   for(int t=1 ; t <=T; t++){
	   int n;
	   cin>>n;
	   map<int, int> counter;
	   for(int i = 0 ; i < n; i++){
	      int d;
	      cin>>d;
	      counter[d]++;
	   }
	   if(counter.size()==1)cout<<"YES\n";
	   else if(counter.size() > 2)cout<<"NO\n";
	   else{
	     int s1 = counter.begin()->second;
	     int s2 = next(counter.begin())->second;
	     if(abs(s1-s2)<=1)cout<<"YES\n";
	     else cout<<"NO\n";
	   }
   }
   return 0;
}
