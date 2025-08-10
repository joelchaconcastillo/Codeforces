#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; long long k;
        cin >> n >> k;
        vector<long long> S(n), T(n);
        for (int i = 0; i < n; i++) cin >> S[i];
        for (int i = 0; i < n; i++) cin >> T[i];

        unordered_map<long long, int> candidate_freq, target_freq;
        for (auto s : S) {
            candidate_freq[s]++;
            candidate_freq[s + k]++;
            candidate_freq[abs(s - k)]++;
        }
        for (auto ti : T) {
            target_freq[ti]++;
        }

        bool possible = true;
        for (auto& [val, count] : target_freq) {
            if (candidate_freq[val] < count) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}

