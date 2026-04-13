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

const int MAXN = 1e6 + 5;

int n, k;
ll a[MAXN];

void solve() {
    cin >> n >> k;
    FOR(i,1,n) cin >> a[i];

    sort(a + 1, a + n + 1);

    int m = min(k, n - k);

    ll sum_small = 0, sum_total = 0;

    FOR(i,1,n) sum_total += a[i];
    FOR(i,1,m) sum_small += a[i];

    cout << sum_total - 2 * sum_small;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
