#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'

void solve() {
    ll A, B, C;
    cin >> A >> B >> C;

    ll total = B - A + 1;
    ll divisible = B / C - (A - 1) / C;

    cout << total - divisible;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("demso.inp","r",stdin);
    freopen("demso.out","w",stdout);

    solve();
    return 0;
}
