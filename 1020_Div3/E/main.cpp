#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+5;
int arr[maxn], idx[maxn];
void solve(){
  int n, q;
  cin >> n >> q;

  for(int i = 1; i <= n; i++){
	  cin >> arr[i];
	  idx[arr[i]] = i;
  }
  for(int i = 0 ;i  < q; i++){
     int l, r, k;
     cin >> l >> r >>k;
     if(idx[k] > r || idx[k] <l){
	   cout << -1<<" ";
	   continue;
     }
     int big = n-k, small = k-1;
     int needBig=0, needSmall=0;
     int bigAv = n-k, smallAv = k-1;
     int lo = l, hi =r;
     while(lo<=hi){
	int mid = (lo+hi)/2;
	if(arr[mid]==k)break;
	if(mid < idx[k]){
	   if(k < arr[mid]) needSmall++;// to be fixed
	   else smallAv--;
	   small--;
	   lo=mid+1;
	}else{
	   if(k > arr[mid]) needBig++;// to be fixed
	   else bigAv--;
	   big--;
	   hi=mid-1;
	}
     }
     if(big < 0 || small <0){
	cout << -1 << " ";
	continue;
     }
     int res = 2*min(needBig, needSmall);
     int diff = abs(needBig - needSmall);
     if(needBig > needSmall){
	if(bigAv < diff)cout <<-1 <<" ";
	else cout << res+2*diff << " ";
     }else{
	if(smallAv < diff) cout << -1 <<" ";
	else cout <<res+2*diff<<" ";
     }
  }
}
int main(){
   int T;
   cin  >> T;
   while(T--){
      solve();
      cout << endl;
   }
   return 0;
}
