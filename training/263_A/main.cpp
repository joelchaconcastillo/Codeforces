#include <bits/stdc++.h>
using namespace std;
void solve(){
   vector<vector<int >> matrix(5, vector<int>(5));
   int cr=0, cc=0;
   for(int i = 0 ; i < 5; i++){
      for(int j = 0 ; j < 5; j++){
	      cin>> matrix[i][j];
	      if(matrix[i][j]==1)cr=i, cc=j;
      }
   }
   cout << abs(cr-2)+abs(cc-2)<<endl;
}
int main(){
  solve();
  return 0;
}
