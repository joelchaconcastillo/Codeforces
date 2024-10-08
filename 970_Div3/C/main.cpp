#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--){
      long long l, r; cin>>l>>r;
      long long sum = l, d = r-l, i=1, count=1;
      while(sum+i <= r) sum+=i, i++, count++;
      cout << count <<endl;
      //n*(n+1)/2 = k
      //r-l
      //1 2  --> 1
      //1 5 --> 4 ,  1 + 2 
      //10 20 --> 10, --> 1, 2, 3, 4 +1 
   }
   return 0;
}
