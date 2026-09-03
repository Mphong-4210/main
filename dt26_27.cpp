#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll m;
    int n;
    cin >> m >> n;

    vector<pair<ll, ll>> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    map<ll, ll> mp;

    int ans = 0;

    for (int i = n - 1; i >= 0; i--) {
        ll l = a[i].first;
        ll r = a[i].second;

        bool overlap = false;

        auto it = mp.lower_bound(l);

        if (it != mp.end() && it->first <= r)
            overlap = true;
            if (it != mp.begin()) {
            auto prv = prev(it);

            if (prv->second >= l)
                overlap = true;
        }

        if (!overlap)
            ans++;


        it = mp.lower_bound(l);

        if (it != mp.begin()) {
            auto prv = prev(it);

            if (prv->second + 1 >= l) {
                l = min(l, prv->first);
                r = max(r, prv->second);
                it = mp.erase(prv);
            }
        }

        while (it != mp.end() && it->first <= r + 1) {
            r = max(r, it->second);
            it = mp.erase(it);
        }

        mp[l] = r;
    }

    cout << ans;

    return 0;
}
