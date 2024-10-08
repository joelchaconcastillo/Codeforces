#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--){
     int a,b; cin>>a>>b;
     int minv=INT_MAX, c=a;
     for(int i = a ; i <=b; i++){
	 if(minv > (i-a)+(b-i)){
		 minv = (i-a)+(b-i);
		 c =  i;
	 }
     }
     cout <<minv<<endl;
   }
   return 0;
}
