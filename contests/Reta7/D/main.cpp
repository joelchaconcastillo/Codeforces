#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int T;
   cin >> T;
   for(int t = 0; t < T; t++){
      int n, k; string st;
      cin>>n>>k;
      cin>>st;
      vector<int>a(k), b(k);
      for(int i =0; i < k; i++)cin>>a[i], a[i]--;
      for(int i =0; i < k; i++)cin>>b[i], b[i]--;
      int q; cin>>q;
      vector<int>cnt(n+1, 0);
      for(int i=0; i < q; i++){
	      int x;
	      cin>>x;
	      cnt[x-1]++;
      }
      string res="";
      for(int i = 0; i< k; i++){
	   string ss=st.substr(a[i], b[i]-a[i]+1);
	   int sum=0, l=a[i], r=b[i];
	   for(int j = l; j <=(l+r)/2; j++){
		   sum +=cnt[j]+cnt[r-j+l];
		   if(sum&1)swap(ss[j-l], ss[r-j]);
	   }
	   res+=ss;
      }
      cout <<res<<endl;
   }
   return 0;
}
