#include <bits/stdc++.h>
using namespace std;
void checker(vector<long long> &res){
	int n = res.size();
	for(int i =  0 ; i < n ;i++){
	        int sum = 0;
		for(int j = i; j < n ; j++){
		sum+=res[j];
		if(sum<=0 && j>i){
			cout <<"error"<<endl;
			exit(0);
		}
		}
	}
}
void solve(){
	int n;cin>>n;
	vector<long long> res(n);
	long long sum = 0;
	for(int i = 0; i < n ; i++){
		if(i%2==0)res[i]=-1;
		else res[i]=3;
	}
	if(n%2==0)res.back()=2;
	//checker(res);
	for(auto i:res)cout <<i <<" ";
	cout << endl;
}
int main(){
  int T;
  cin>>T;
  while(T--){
	  solve();
  }
  return 0;
}
