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

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n), b(n - 1);

    REP(i, n) cin >> a[i];
    REP(i, n - 1) cin >> b[i];

    int i = 0, j = 0;

    while (i < n && j < n - 1) {
        if (a[i] == b[j]) {
            i++;
            j++;
        }
        else {
            cout << i+1;
            return;
        }
    }

    cout << n*(n+1)/2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen(".inp", "r", stdin);
    // freopen(".out", "w", stdout);

    solve();
}
