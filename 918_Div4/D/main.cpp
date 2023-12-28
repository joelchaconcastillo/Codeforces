/*
 *   cv, cvc
 *   cv.cv.cv.cvc.
 *
 * */

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
      string s;
      cin>>s;
      vector<string>st;
      map<char, bool> isC;isC['b']=true;isC['c']=true;isC['d']=true;
      int i=0;
      while(i<n){
	 if(i+2<n && isC[s[i]] && !isC[s[i+1]] && isC[s[i+2]])
		 st.push_back(s.substr(i, 3)), i+=3;
	 else if(i+1<n && isC[s[i]] && !isC[s[i+1]])
		 st.push_back(s.substr(i,2)), i+=2;
	 else{
		if(!st.empty()) st.back().pop_back();
		i--;
	 }
      }
      string res ="";
      for(auto i :st)res+=i+".";
      res.pop_back();
      cout<<res<<endl;

   }
   return 0;
}
