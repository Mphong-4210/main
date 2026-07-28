#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, m;
vector<ll> a;
vector<ll> s;
ll l, r, ans;

bool dfs(int i, ll lim) {
    if (i == n) return true;

    ll x = a[i];

    for (int j = 0; j < m; j++) {
        if (s[j] + x <= lim) {
            s[j] += x;
            if (dfs(i + 1, lim)) return true;
            s[j] -= x;
        }

        if (s[j] == 0 || s[j] + x == lim) break;
    }

    return false;
}

int main() {
    freopen("PHANVIEC.INP", "r", stdin);
freopen("PHANVIEC.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    a.resize(n);

    l = 0;
    r = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        l = max(l, a[i]);
        r += a[i];
    }

    sort(a.rbegin(), a.rend());

    while (l <= r) {
        ll mid = (l + r) / 2;
        s.assign(m, 0);

        if (dfs(0, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans;
}
