#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin>>n>>k;
	vector<int> S(n), T(n);
	for(int i = 0  ;i  < n; i++) cin >> S[i];
	for(int i = 0  ;i  < n; i++) cin >> T[i];
	unordered_map<int, int> S1, S2;
	for(auto s:S){
	       	S1[s%k]++;
		S2[abs((s%k)-k)]++;
	}
	for(auto t:T){
		int r1 = t%k;
		if(S1.count(r1) || S2.count(r1)){
			S1[r1]--;
			S2[r2]--;
			if(S1[r1]==0)S1.erase(r1);
			if(S2[r2]==0)S2.erase(r2);
			continue;
		}
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
}
int main(){
  int T;
  cin>>T;
  while(T--){
	  solve(); 
  }
  return 0;
}
/*
 
        |x-k|
    |x-k|
    a = x%k
    |a-k|

 
 * */
