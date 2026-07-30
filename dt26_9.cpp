#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int tong = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        tong += a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    vector<int> dp(tong + 1, INF);
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
        vector<int> dp1(tong + 1, INF);
        for (int s = 0; s <= tong; ++s) {
            if (dp[s] != INF) {
                if (s + a[i] <= tong) {
                    dp1[s + a[i]] = min(dp1[s + a[i]], dp[s]);
                }
                dp1[s] = min(dp1[s], dp[s] + b[i]);
            }
        }
        dp = dp1; 
    }
    int kq = INF;
    for (int s = 0; s <= tong; ++s) {
        if (dp[s] != INF) {
            int mx = max(s, dp[s]);
            kq = min(kq, mx);
        }
    }
    cout << kq << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
