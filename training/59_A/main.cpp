#include <bits/stdc++.h>
using namespace std;
void solve(){
 string st, stl="", stu="";
 cin>>st;
 int nlc=0, ncc=0;
 for(auto i:st){
    if(islower(i))nlc++;
    else ncc++;
    stl += tolower(i);
    stu += toupper(i);
 }
 if(nlc>=ncc) st = stl;
 else st = stu;
 cout << st <<endl;
}
int main(){
  solve();
  return 0;
}
