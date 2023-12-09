#include <bits/stdc++.h>
using namespace  std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t = 0; t < T ; t++){
        string st;
        cin>>st;
        vector<string>res;
        for(char i = st[1]+1; i <= '8'; i++) cout<<st[0]<<i<<endl;
        for(char i = st[1]-1; i >= '1'; i--) cout<<st[0]<<i<<endl;
        for(char i = st[0]+1; i <= 'h'; i++) cout<<i<<st[1]<<endl;
        for(char i = st[0]-1; i >= 'a'; i--) cout<<i<<st[1]<<endl;
    }
    return 0;
}