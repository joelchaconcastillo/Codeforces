#include <bits/stdc++.h>
using namespace std;
bool game(int a, int b, int c, int d){
   int wins_a = 0, wins_b = 0;
   wins_a += a>b;
   wins_a += c>d;
   wins_b += b>a;
   wins_b += d>c;
   return wins_a > wins_b;
}
void solve(){
  vector<int> a(4);
  cin >> a[0] >> a[1]>>a[2]>>a[3];
  int res=0;
  res += game(a[0], a[2], a[1], a[3]);
  res += game(a[1], a[2], a[0], a[3]);
  res += game(a[0], a[3], a[1], a[2]);
  res += game(a[1], a[3], a[0], a[2]);
  cout << res<<endl;
}
int main(){
  int T;cin>>T;
  while(T--) solve();
  return 0;
}
