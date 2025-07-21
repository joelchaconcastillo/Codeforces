#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n, m;
	cin>>n>>m;
	unordered_map<int, vector<int> >edgeList;
	vector<int> deg(n,0);
	for(int i = 0 ; i < m; i++){
		int _from, _to;
		cin >> _from >> _to;
		_from--;
		_to--;
		edgeList[_from].push_back(_to);
		deg[_to]++;
	}
	typedef tuple<int, int> my_type;
	priority_queue<my_type, vector<my_type>, greater<>> pq;
	vector<
}
int main(){
        int T; cin>> T;
	while(T--){
	   solve();
	}
	return 0;
}
