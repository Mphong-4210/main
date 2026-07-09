#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int,int>> a(n);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[i - 1] = {x, i};
    }

    sort(a.begin(), a.end());

    int mn = a[0].second;
    int ans = -1;

    for (int i = 1; i < n; i++) {
        ans = max(ans, a[i].second - mn);
        mn = min(mn, a[i].second);
    }

    cout << ans;
    return 0;
}
