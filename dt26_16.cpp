#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<ll> p(n), v(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> v[i];
    auto check = [&](ll t) {
        vector<pair<ll, int>> a;
        a.reserve(2 * n);
        for (int i = 0; i < n; i++) {
            ll L = p[i] - v[i] * t;
            ll R = p[i] + v[i] * t;
            a.push_back({L, 1});
            a.push_back({R + 1, -1});
        }
        sort(a.begin(), a.end());
        int cnt = 0;
        int i = 0;
        while (i < (int)a.size()) {
            ll x = a[i].first;
            while (i < (int)a.size() && a[i].first == x) {
                cnt += a[i].second;
                i++;
            }
            if (cnt >= k) return true;
        }
        return false;
    };
    ll kq = 0, hi = 1000000000LL;
    while (kq < hi) {
        ll mid = (kq + hi) / 2;
        if (check(mid))
            hi = mid;
        else
            kq = mid + 1;
    }
    cout << kq;
    return 0;
}
