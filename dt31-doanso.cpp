#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);

    int n;
    long long k;
    cin >> n >> k;

    vector<pair<long long, long long>> a(n);
    long long maxLen = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        maxLen = max(maxLen, a[i].second - a[i].first);
    }

    long long left = 1, right = maxLen, ans = 0;

    auto check = [&](long long L) {
        long long cnt = 0;
        for (auto &p : a) {
            cnt += (p.second - p.first) / L;
            if (cnt >= k) return true;
        }
        return false;
    };

    while (left <= right) {
        long long mid = (left + right) / 2;
        if (check(mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
