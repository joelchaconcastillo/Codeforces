#include <bits/stdc++.h>
using namespace std;
bool check(vector<long long> &sol, vector<long long> &b){
   for(int i = 0; i+1 < sol.size(); i++){
	   if((sol[i]&sol[i+1]) != b[i]){
		   return false;
	   }
   }
   return true;
}
int main(){
   int T;
   cin>>T;
   while(T--){
      int n; cin>>n;
      vector<long long>b(n-1);
      for(auto &i:b)cin>>i;
      int counter=0;
      vector<long long> ans;
      ans.push_back(b.front());
      for(int i = 0 ;i+2< n; i++) ans.push_back(b[i]|b[i+1]);
      if(ans.size()!=n) ans.push_back(b.back());
      //for(auto i:ans)cout << i<< " ";
      //cout <<"----"<<endl;
      //cout << check(ans, b)<<endl;
      if(!check(ans, b))cout <<-1<<endl;
      else{
	   for(auto i:ans)cout << i<< " ";
	   cout<<endl;
      }
   }
   return 0;
}

/*
 *   3       5    4      2
   3  2^31   5  4
  1 0 1
  1 0 0 
 * */
