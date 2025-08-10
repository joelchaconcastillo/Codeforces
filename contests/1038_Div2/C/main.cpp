#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n; cin >> n;
   //max sum f(i,j) where f is manhatan distance of i-point and j-point
   vector<int> x(n), y(n), order(n);
   for(int i = 0 ; i < n; i++){
	   cin >> x[i] >> y[i];
   }
	   iota(order.begin(), order.end(), 0);
	   sort(order.begin(), order.end(), [&](int i, int j){
			    return x[i] < x[j];
			   });
	   sort(order.begin(), order.begin() +n/2, [&](int i, int j){
			   return y[i] < y[j];
			   });
	   sort(order.begin()+n/2, order.end(), [&](int i, int j){
			   return y[i] < y[j];
			   });
	   for(int i = 0 ; i< n/2; i++){
		   cout << order[i]+1 <<" " <<order[n-1-i]+1<<endl;
	   }
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
        int T; cin>> T;
	while(T--){
	   solve();
	}
	return 0;
}
