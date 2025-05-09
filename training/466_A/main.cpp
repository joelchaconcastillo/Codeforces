#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int res = n*a; //only taking a
  res = min(res, (int) (b*ceil( (n/(double)m) ))); //only taking b
  //taking most b and rem a
  res = min(res, b*(n/m) + (n%m)*a);
  cout << res <<endl;
}
int main(){
  solve();
  return 0;
}
/*
 *
 n  m a b
 10 3 5 1
  n*a   b >= a*m
  floor(10/3)*b +     otherwise

 * */
