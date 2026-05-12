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
    ll m, n;
    cin >> m >> n;

    vector<vll> F(m + 1, vll(n + 1));

    REP(i, m) {
        REP(j, n) {
            char a;
            cin >> a;
            F[i + 1][j + 1] = a - '0';
        }
    }

    vector<vector<bool>> visited(m + 1, vector<bool>(n + 1, false));

    ll dx[4] = {1, -1, 0, 0};
    ll dy[4] = {0, 0, 1, -1};

    ll maxx = 0;

    FOR(i, 1, m) {
        FOR(j, 1, n) {
            if (!visited[i][j]) {
                stack<pll> st;

                st.push({i, j});
                visited[i][j] = true;

                ll cnt = 1;

                while (!st.empty()) {
                    ll x = st.top().fi;
                    ll y = st.top().se;
                    st.pop();

                    REP(k, 4) {
                        ll a = x + dx[k];
                        ll b = y + dy[k];

                        if (a <= 0 || b <= 0 || a > m || b > n)
                            continue;

                        if (!visited[a][b] && F[a][b] == F[x][y]) {
                            visited[a][b] = true;
                            st.push({a, b});
                            cnt++;
                        }
                    }
                }

                maxx = max(maxx, cnt);
            }
        }
    }

    cout << maxx;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen(".inp", "r", stdin);
    // freopen(".out", "w", stdout);

    solve();
}
