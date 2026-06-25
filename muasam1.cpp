#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float
#define str string
#define ldb long double
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define dq deque<ll>
#define bend(x) (x).begin(), (x).end()
#define ret return

ll n, q;
vll a, dp;

void solve() {
    cin >> n >> q;
    a.resize(n + 1);

    ll sum = 0;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin() + 1, a.end());

    dp.assign(n + 1, 0);

    for (ll i = 1; i <= n; i++) {
        ll disc = a[i] * q / 100;

        dp[i] = dp[i - 1] + disc;

        if (i >= 3)
            dp[i] = max(dp[i], dp[i - 3] + a[i - 2]);
    }

    cout << sum*2 - dp[n]*2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
