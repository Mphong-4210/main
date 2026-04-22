#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXN = 200005;

int n;
ll a[MAXN], d[MAXN];

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    if (n == 1) {
        cout << 1;
        return;
    }

    for (int i = 1; i < n; i++) {
        d[i] = a[i + 1] - a[i];
    }

    int m = n - 1;
    int ans = 1;

    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= m; j++) {
            int len = 0;
            while (i + len <= m && j + len <= m && d[i + len] == d[j + len]) {
                len++;
            }
            ans = max(ans, len + 1);
        }
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}
