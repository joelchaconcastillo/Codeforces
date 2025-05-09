/**
  insert 01
  a[i] != a[k-i+1] forall i=1,..,k
  0------0+01
  01+1------1
  Base case:
     N is odd: middle item is always the same..
 * */
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
      if(n%2==1){
	     cout <<-1<<"\n";
	     continue;
      }
      vector<int> op;
      int cs=s.size(), idx=0; 
      while( !s.empty() && op.size() <= 300){
	   if(s.front()==s.back()){
	     //if(s.front()=='0') op.push_back(s.size()+idx),s=s+"01";
	     if(s.front()=='0') op.push_back(cs-idx),s=s+"01";
	     else op.push_back(idx), s = "01"+s;
	     cs+=2;
	   }
	   s = s.substr(1, s.size()-2);
	   idx++;
      }
      if(op.size() > 300){
	      cout <<-1<<endl;
	      continue;
      }
      cout << op.size()<<"\n";
      if(!op.empty()){
      for(auto i:op)cout << i<<" ";
      cout<<endl;
      }
   }
   return 0;
}
