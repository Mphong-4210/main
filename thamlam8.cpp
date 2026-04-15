#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'

const int MAXN = 1005;

int n, m;
int a[MAXN];

void solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];

    sort(a + 1, a + n + 1, greater<int>());

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        if (sum - (i - 1) >= m) {
            cout << i;
            return;
        }
    }

    cout << -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("ODIEN.INP", "r", stdin);
    freopen("ODIEN.OUT", "w", stdout);

    solve();
    return 0;
}
