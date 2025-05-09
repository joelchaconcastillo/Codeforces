#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>> T;
   while(T--){
     int n;cin>>n;
     string st; cin>>st;
     int l = sqrt(n);
     if(l*l != n){cout <<"No\n"; continue;}
     int countZeros=0;
     for(auto i:st) countZeros += (i=='0');
     int centerZeros = l-2;
     int sqrtCZ = sqrt(countZeros);
     if( sqrtCZ*sqrtCZ != countZeros){cout <<"No\n"; continue;}
     if( centerZeros != countZeros) cout << "No\n";
     else cout << "Yes\n";

   }
   return 0;
}

/*
   1 1 1 1
   1 0 0 1
   1 0 0 1
   1 1 1 1

   1 1 1 1 1
   1 0 0 0 1
   1 0 0 0 1
   1 0 0 0 1
   1 1 1 1 1


 * */
