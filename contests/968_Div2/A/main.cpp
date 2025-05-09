#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin >> T;
   while(T--){
     int n;
     cin >> n;
     string st;
     cin>>st;
     if(n<2){cout << "NO\n"; continue;}
     if(st.front() == st.back()){cout << "NO\n"; continue;}
     cout << "YES\n";
   }
   return 0;
}
