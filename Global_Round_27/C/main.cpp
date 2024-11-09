#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin>>T;
   while(T--){
     int n;  cin >>n;
     vector<int> res(n);
     int leftBit = 0, k=n, rightBit = n &(-n);
     for(int i = 0 ; i < 32; i++) if(n&(1<<i)) leftBit=1<<i;
     if(n&1){
	res[n-4] = rightBit, res[n-3] = rightBit + (rightBit==1?2:1), res[n-2] = n - rightBit, res[n-1]=n;
     }else{

	k = (leftBit<<1)-1; // all bits one!
	if( n == leftBit) //its power of two
	  res[n-5] = 1, res[n-4]= 3, res[n-3] = n-2, res[n-2] = n-1, res[n-1]=n;
	else res[n-3] = n, res[n-2] = n-1, res[n-1] = leftBit-1;
     }
     cout << k <<endl;
     set<int> marked;
     for(auto i:res)marked.insert(i);
     for(int i = 1, j = 0; i <=n; i++){
	if(marked.find(i)!=marked.end()) continue;
	res[j++]=i;
     }
     for(auto i:res)cout << i << " ";
     cout <<endl;
   }
   return 0;
}
