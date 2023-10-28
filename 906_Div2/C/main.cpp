#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   for(int t=1 ; t <=T; t++){
      int n;
      string s;
      cin>>n>>s;
      vector<int> op;
      int limit=0, i = 0;      
      while(i < s.size() && limit < 300){
	 if(s[i]==s[s.size()-i-1]){
	   op.push_back(s.size()-i);
	   s.insert(s.size()-i, "01");
	   limit++;
	 }else i++;
      }
      if(limit==300){
	      cout <<-1<<endl;
	      continue;
      }
      cout << op.size()<<"\n";
      for(auto i:op)cout << i<<" ";
      cout<<endl;
   }
   return 0;
}
