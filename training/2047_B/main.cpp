#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n; cin >> n;
   string st;
   cin >> st;
   vector<int> freq(200);
   for(auto i:st) freq[i-'a']++;
   pair<int, char> minOcurrence(INT_MAX, '0'), maxOcurrence(INT_MIN, '0');
   for(int i = 0 ; i < freq.size(); i++){
      if(freq[i]==0)continue;
      minOcurrence = min(minOcurrence, {freq[i], i+'a'});
      maxOcurrence = max(maxOcurrence, {freq[i], i+'a'});
   }
   if(minOcurrence.first == INT_MIN){
	  cout << st<<endl;
	  return;
   }
   for(auto &i:st){
      if(i == minOcurrence.second){
	      i=maxOcurrence.second;
	      break;
      }
   }
   cout <<st<<endl;
}
int main(){
  int T; cin >> T;
  while(T--)solve();
  return 0;
}
