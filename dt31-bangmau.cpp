#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long min_val = a[0];
    long long ans = LLONG_MIN;

    for (int i = 1; i < n; i++) {
        ans = max(ans, a[i] - min_val);
        min_val = min(min_val, a[i]);
    }

    cout << ans;

    return 0;
}
