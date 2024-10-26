#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;cin>>T;
   while(T--){
      int n;cin>>n;
      string st;
      cin>>st;
      bool cond1=false, cond2=false;
      cond1 = (st.front()=='1' || st.back()=='1');
      for(int i = 0 ; i+1 < n; i++)if(st[i]=='1' && st[i+1]=='1') cond2=true;
      if(cond1 || cond2) cout << "YES"<<endl;
      else cout <<"NO"<<endl;
   }
   return 0;
}
/*
10 N
01 N
111 Y
000 N
100001100000 Y 
10101
010 N 
   
5
2
11
3
010
12
101111111100
10
0111111011
8
01000010

 * */
