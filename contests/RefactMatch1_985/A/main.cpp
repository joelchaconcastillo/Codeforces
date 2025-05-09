#include <bits/stdc++.h>
using namespace std;
int check(int r, int m){
   return ((r-m)/m)+1;
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;cin>>T;
   while(T--){
       long long l, r, k; cin>>l>>r>>k;
       if(k==1){
	       cout << r-l+1<<endl;
	       continue;
       }
       long long cu = l, jump=(r-l+1);
       for(;jump>=1; jump/=2){
	   while(check(r, cu+jump)>=k) cu+=jump;
       }
       if(check(r, cu)<k)cout << 0<<endl;
       else
       cout << cu-l+1<<endl;
   }
   return 0;
}
/*
k=2
S={3,4,5,6,7,8,9}
   
   3:3  1
   4:2  
   5:1
   6:1
7:1
8:1
9:1-
-----------
   3   9   2
   6/2 == 3
   6/3 == 2
   6/4 == 1
 1
{4,5,6,7,8,9}


{2,3,4,5,6,7,8,9,10}         k = 2
                   
 * */
