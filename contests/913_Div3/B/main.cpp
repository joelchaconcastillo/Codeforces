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
        vector<int>stCap, stLow;
        for(int i = 0 ; i < st.size(); i++){
            if((st[i]=='b' && stLow.empty()) || (st[i] == 'B' && stCap.empty())) continue;
            if(st[i]=='b' && !stLow.empty()) stLow.pop_back();
            else if(st[i]=='B' && !stCap.empty()) stCap.pop_back();
            else if(islower(st[i]))stLow.push_back(i);
            else if(isupper(st[i]))stCap.push_back(i);
        }
        string res="";
        vector<int> bothidx;
        for(auto i:stLow)bothidx.push_back(i);
        for(auto i:stCap)bothidx.push_back(i);
        sort(bothidx.begin(), bothidx.end());
        for(auto i:bothidx) res+=st[i];
        cout<<res<<endl;
    }
    return 0;
}