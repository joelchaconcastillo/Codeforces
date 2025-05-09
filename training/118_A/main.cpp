#include <bits/stdc++.h>
using namespace std;
void solve(){
   string st, res="";
   cin >> st;
   unordered_map<char, bool> isVowel = {
      {'a',true},
      {'e',true},
      {'i',true},
      {'o',true},
      {'u',true},
      {'y',true}
   };
   for(auto i:st){
      i = tolower(i);
      if(isVowel[i])continue;
      res.push_back('.');
      res.push_back(i);
   }
   cout << res<< endl;
}
int main(){
  solve();
  return 0;
}
