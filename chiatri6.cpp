#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define ll long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)

typedef pair<ll, ll> pll;
typedef vector<ll> vll;

vector<ll> a, b;

ll kth(int ia, int ib, int k) {
    if (ia >= a.size()) return b[ib + k - 1];
    if (ib >= b.size()) return a[ia + k - 1];

    if (k == 1) return min(a[ia], b[ib]);

    int mida = min((int)a.size() - ia, k / 2);
    int midb = min((int)b.size() - ib, k / 2);

    if (a[ia + mida - 1] < b[ib + midb - 1]) {
        return kth(ia + mida, ib, k - mida);
    }

    return kth(ia, ib + midb, k - midb);
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    a.resize(n);
    b.resize(m);

    REP(i, n) cin >> a[i];
    REP(i, m) cin >> b[i];

    cout << kth(0, 0, k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen(".inp", "r", stdin);
    // freopen(".out", "w", stdout);

    solve();
}
