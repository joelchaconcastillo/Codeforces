#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
const int maxn=2e5+5;
int n, a[maxn], p[maxn];
using namespace std;
void construct(vector<int> pos, vector<int>nums, int layer){
	sort(nums.begin(), nums.end());
	if(pos.size()==1){ //edge case: just one item
		p[pos[0]]=nums[0];
		return;
	}
	vector<int> keep, rem;
	vector<bool>spec;
	for(auto x:pos){ //insert item items whose id removed matches is bigger than current layer; the ones to be processed
		if(a[x]>layer) keep.push_back(x);
	}
	if(layer%2==1) reverse(nums.begin(), nums.end());//not local min
	vector<int> newnums;
	for(int i = 1; i <=keep.size(); i++){
		newnums.push_back(nums.back());
		nums.pop_back();
	}
	construct(keep, newnums, layer+1);
	reverse(nums.begin(), nums.end());
	int last;
	for(auto x:pos){
		last = x;
		if(a[x] >layer) break;
		p[x] = nums.back();
		nums.pop_back();
	}
	reverse(nums.begin(), nums.end());
	for(auto x:pos){
		if(x<last) continue;
		if(a[x]>layer) continue;
		p[x] = nums.back();
		nums.pop_back();
	}
}
int solve(){
   int n;
   cin >> n;
   for(int i = 1 ; i <= n; i++){
	   cin >> a[i];
   }
   for(int i = 1; i <=n; i++){
	   if(a[i]<=0) a[i]=1e9; //for the las one existent item
   }
   vector<int> A;
   for(int i =1; i <=n; i++) A.push_back(i);
   construct(A, A, 1);
   for(int i = 1; i <=n; i++)
	   cout <<p[i]<<" ";
   cout <<endl;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
	  solve();
    }
    return 0;
}
/*
 
   1 -1 1 2 1
   4  3 5 1 2
   x    x   x
      3   1
          x
 6 7 2 4 3 8 5 1
 3 1 2 1-1 1 1 2     
 3 1 2 1-1 1 1 2

 *
 * */
