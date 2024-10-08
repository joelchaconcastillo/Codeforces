#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--){
      int a, b;cin>>a>>b;
      //a:2, b:1 
      if(b==0){
	 if((a%2)==0){cout << "Yes\n";continue;}
	 else{ cout << "No\n"; continue;}
      }
      if(a==0){
	 if((b%2)==0){cout << "Yes\n";continue;}
	 else{ cout << "No\n"; continue;}
      }
      if((a%2) == 1){cout << "No\n"; continue;}
      b%=2;
      a += 2*b;
      if(a%2 == 0)cout << "Yes\n";
      else cout <<"No\n";
   }
   return 0;
}
/*
 a=10, b=10
 b+5-->15
 * */
