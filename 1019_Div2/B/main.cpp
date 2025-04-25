#include <iostream>
#include <unordered_set>
//#include <bits/stdc++.h>
using namespace std;
int solve(){
   int n;
   cin >> n;
   string st="";
   cin >> st;
   st = "0"+st;
   int flips = 0;
   for(int i = 1; i < st.size(); i++){
      if(st[i]!=st[i-1])flips++;
   }
   if(flips==2) flips--;
   else if(flips>2)flips-=2;
   return n+flips;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
	  cout << solve()<<endl;
    }
    return 0;
}

