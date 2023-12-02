/*
   1 < t < 10^4
   1 < n,m < 2*10^5
   k=2
   2, 3, 2 day/city
   1 2
   1 2
   1 1
   //////
   1 2 3 day/city
   y y n
   y y n
   y n n
   3 2 0
   /////

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n, m ,k;
        cin >> n >> m >> k;
        vector<vector<int>> a(n+2);
        for(int i = 1; i <= m; i++){ //city i
            int l, r;
            cin >> l >> r;
            a[l].push_back(i);
            a[r+1].push_back(-i);
        }
        set<int> state_city;
        int dry=0;
        map< set<int>, int>count_2;
        map<int, int> count_1;
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < a[i].size(); j++){
                if(a[i][j]>0)state_city.insert(a[i][j]);
                else if(a[i][j]<0)state_city.erase(-a[i][j]);
            }
            if(state_city.size()==1) count_1[*state_city.begin()]++;
            else if(state_city.size()==2) count_2[state_city]++;
            else if(state_city.empty())dry++;
        }
        int ans=0, mx1=0, mx2=0;
        for(auto [s, cnt]:count_1){
            if(cnt > mx1) mx2=mx1, mx1=cnt; 
            else mx2=max(mx2, cnt);
        }
        ans=mx1+mx2;
        for(auto [s, cnt]:count_2)
           ans = max(ans, cnt+count_1[*s.begin()]+count_1[*prev(s.end())]);
        cout << ans+dry<<endl;
    }
    return 0;
}