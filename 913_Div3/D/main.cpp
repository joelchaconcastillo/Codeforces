#include <bits/stdc++.h>
using namespace  std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t = 0; t < T ; t++){
        string st;
        int s;
        cin>>s>>st;
        vector<int> st1, st2;
        for(auto i:st){
            if(!st1.empty() && st1.back()!=i) st1.pop_back();
            else st1.push_back(i);
        }
        reverse(st.begin(), st.end());
        for(auto i:st){
            if(!st2.empty() && st2.back()!=i) st2.pop_back();
            else st2.push_back(i);
        }
        cout << min(st1.size(), st2.size())<<endl;
    }
    return 0;
}