#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin >> n;
  vector<vector<int> > res(n, vector<int> (n, -1));
  int ite = (n*n)-1;
  vector<tuple<int, int>> directions = {
	  {0, 1}, {1,0}, {0, -1}, {-1,0}};
  int current_direction = 0, r=0, c=0;
  while(ite>=0){
      res[r][c] = ite--;
      auto [delta_r, delta_c] = directions[current_direction];
      r+=delta_r, c+= delta_c;
      if(r < 0 || c<0 || r>=n || c>=n || res[r][c] != -1){
	      r -= delta_r, c -= delta_c;
              current_direction = ((current_direction+1)%4);
              auto [delta_r, delta_c] = directions[current_direction];
              r += delta_r, c += delta_c;
      }
  }

  for(int i = 0 ; i <n ;i++){
	  for(int j = 0 ; j < n; j++){
		  cout << res[i][j] <<" ";
	  }
	  cout <<endl;
  }
}
int main(){
  int T;
  cin>> T;
  while(T--){
    solve();
  }
  return 0;
}
