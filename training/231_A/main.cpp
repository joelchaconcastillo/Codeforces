#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n; cin>>n;
   int a,b,c, res = 0 ;
   while(n--){
	   cin>> a>> b >> c;
	   if(a+b+c>=2)res++;
   }
   cout << res<<endl;
}
int main(){
  solve();
  return 0;
}
