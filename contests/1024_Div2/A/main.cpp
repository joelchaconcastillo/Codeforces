#include <bits/stdc++.h>
using namespace std;
//n  m p q
//10 7 5 2
// a+b = p
// a+b > 0
// k*(a+b) = m --> k = (n/p)
//   n%p ==0 
//   (a+b)*k = m
//   (a+b) = 7/2
//   10 7 5 2
// _ _ _ _ _ _ _ _ _ _
// a         a
//         b         b
void solve(){
  int n, m, p, q;
  cin >> n >> m >> p >> q;
  if(n%p != 0){
	  cout << "YES\n";
	  return;
  }
  if( (n/p)*q == m) cout << "YES\n";
  else cout << "NO\n";
}
int main(){
  int T;
  cin>> T;
  while(T--){
    solve();
  }
  return 0;
}
/*

 n m p q 

 a_1+...+a_n = m [ m -m m -m]

 a_1+...+a_p = q

 [        ]
 [  ] = q
      |
 q 0 0 q 0 0 --> k*q
       [   ]
 0 0 q 0 0 q

    [q -q] [0 n]
 q <= m
 if (n%p)==0 --> yes

   n m p q
   5 4 3 3
   _ _ _ _ _ _  m = 6
   5-2 0 5-2 0
   m%delta_p == 0
            _  _  _ _
      _ _  _  _
    
      a+b=m
      sum(k*(a+b)) = n
     k*delta = n
       4
  _ _ _ _ _
  _ _ _

  []



  * */
