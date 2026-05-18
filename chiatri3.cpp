#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define ll long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)

typedef vector<ll> vll;
typedef pair<ll,ll> pll;

ll f[93];

void solve() {
    ll n, k;
    cin >> n >> k;

    f[1] = f[2] = 1;

    FOR(i, 3, 92) {
        f[i] = f[i - 1] + f[i - 2];
    }

    while (n > 2) {
        if (k <= f[n - 2]) {
            n -= 2;
        }
        else {
            k -= f[n - 2];
            n -= 1;
        }
    }

    if (n == 1) cout << 'A';
    else cout << 'B';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen(".inp", "r", stdin);
    // freopen(".out", "w", stdout);

    solve();
}
