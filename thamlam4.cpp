#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)

const ll MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;

int n;
ll a[MAXN];

void solve() {
    cin >> n;
    FOR(i,1,n) cin >> a[i];

    sort(a + 1, a + n + 1);

    ll res = 0;
    FOR(i,1,n) {
        res = (res + a[i] * (i - 1)) % MOD;
    }

    cout << res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
