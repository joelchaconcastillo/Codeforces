#include <bits/stdc++.h>
using namespace std;
void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  int res = 0;
  res = max(res, a*b*c);
  res = max(res, a+b+c);
  res = max(res, (a+b)+c);
  res = max(res, a+(b+c));
  res = max(res, (a*b)+c);
  res = max(res, a+(b*c));
  res = max(res, (a+b)*c);
  res = max(res, a*(b+c));
  cout << res <<endl;

}
int main(){
   solve();
   return 0;
}
