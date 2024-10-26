#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--){
	   int n, k;
	   cin>>n>>k;
	   long long res=1;
	   for(int i = 1; i < n; i++, res+=k);
	   cout << res<<endl;

   }
   return 0;
}
