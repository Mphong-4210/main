#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (ll i = 0; i < (n); i++)
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vll> F(n + 1);
    vector<bool> visited(n + 1, false);
    vll res(n + 1, -1);

    REP(i, m) {
        ll a, b;
        cin >> a >> b;
        F[a].push_back(b);
        F[b].push_back(a);
    }

    queue<ll> q;
    q.push(1);

    visited[1] = true;
    res[1] = 0;

    while (!q.empty()) {
        ll u = q.front();
        q.pop();

        for (auto v : F[u]) {
            if (!visited[v]) {
                visited[v] = true;
                res[v] = res[u] + 1;
                q.push(v);
            }
        }
    }

    FOR(i, 1, n)
        cout << res[i] << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen(".inp", "r", stdin);
    // freopen(".out", "w", stdout);

    solve();
}
