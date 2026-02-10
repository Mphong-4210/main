#include <bits/stdc++.h>
using namespace std;

int main() {
    
    freopen("XAUGANDX.INP", "r", stdin);
    freopen("XAUGANDX.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;
    int n = S.size();
    int k = 0;
    for (int i = 0; i < n / 2; i++)
        if (S[i] != S[n - 1 - i]) k++;
    int maxlen = 0;
    string best;

    for (int l = 0; l < n; ++l) {
        for (int r = l; r < n; ++r) {
            int diff = 0;
            for (int i = 0; i < (r - l + 1) / 2; ++i) {
                if (S[l + i] != S[r - i]) diff++;
                if (diff > 1) break;
            }
            if (diff <= 1) {
                int len = r - l + 1;
                if (len > maxlen) {
                    maxlen = len;
                    best = S.substr(l, len);
                }
            }
        }
    }

    cout << k << '\n' << maxlen << '\n' << best << '\n';
    return 0;
}
