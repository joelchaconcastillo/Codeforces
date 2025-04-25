#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
void solve(){
   int n;
   string st;
   cin>>n>>st;
   int count = 0, res = 0;
   for(auto i:st) count += (i=='1');
   for(auto i:st){
	   res +=count;
	   if(i=='1')res--;
	   else res++;
   }
   cout << res << endl;
}
int main(){
  int T;
  cin>>T;
  while(T--){
	 solve();
  }
  return 0;
}
