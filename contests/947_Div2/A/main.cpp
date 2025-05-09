#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >>n;
      vector<int> ai(n);
      for(auto &i:ai)cin>>i;
      int pos = 0;
      for(int i = 0; i < n; i++) if(ai[i]>ai[(i+1)%n]) pos=i+1;
      bool isNonDecre = true;
      for(int i = 0, j = pos; i+1<n; i++, j=(j+1)%n){
	      if(ai[j%n] > ai[(j+1)%n]){
		      isNonDecre=false;
		      break;
	      }
      }

      if(isNonDecre)cout<<"Yes\n";
      else cout << "No\n";
   }
   return 0;
}
