#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("DC.INP", "r", stdin);
    freopen("DC.OUT", "w", stdout);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<pair<long long, int>> a;
    for (int i = 0; i < n; ++i) {
        long long l, r;
        cin >> l >> r;
        a.push_back({l, 1});
        a.push_back({r + 1, -1});
    }

    sort(a.begin(), a.end());

    long long ans = 0;
    int c = 0;

    for (int i = 0; i < a.size() - 1; ++i) {
        c += a[i].second;
        if (c == k) {
            ans += a[i + 1].first - a[i].first;
        }
    }

    cout << ans << "\n";

    return 0;
}
