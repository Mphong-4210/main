#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TINHTONG.INP", "r", stdin);
    freopen("TINHTONG.OUT", "w", stdout);

    int n, k;
    long long b;
    cin >> n >> k >> b;

    vector<long long> a(n + 1), s(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }

    int p = (b - 1) % n + 1;
    long long ans = 0;
    int c = min((long long)k, (long long)(n - p + 1));

    ans += s[p + c - 1] - s[p - 1];
    k -= c;

    ans += 1LL * (k / n) * s[n];
    k %= n;

    ans += s[k];

    cout << ans;
    return 0;
}
