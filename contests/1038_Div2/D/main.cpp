#include <bits/stdc++.h>
using namespace std;
void update(long long &a, long long &b){
	if(b < a) a=b;
}
void solve(){
	int n, m;
	cin>>n>>m;
	unordered_map<int, vector<int> >edgeList(n+1);
	while(m--){
		int a, b;
		cin >>a >>b;
		edgeList[a].push_back(b);
		edgeList[b].push_back(a);
	}
	int t = 0;
	vector<long long> d(n+2,INT_MAX);
	auto nd = d;
	d[1] = 0;
	while(d[n]>=INT_MAX){
		for(int i = 1; i <=n; i++) nd[i] = d[i]+1;
		for(int i = 1; i <=n; i++){
			update(nd[edgeList[i][t%edgeList[i].size()]], d[i]);
		}
		d = nd;
		t++;
	}
	cout << t <<" "<<d[n]<<endl;
}
int main(){
        int T; cin>> T;
	while(T--){
	   solve();
	}
	return 0;
}
