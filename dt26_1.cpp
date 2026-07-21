#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'

void solve() {
    int gbd, gkt;
    cin >> gbd >> gkt;

    int ans = 0;
    int cnt = 0;

    for (int i = gbd; i < gkt; i++) {
        cnt++;

        int cost;
        if (i < 12) cost = 6;
        else cost = 10;

        if (cnt <= 4) ans += cost;
        else ans += cost / 2;
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("khuvuichoi.inp","r",stdin);
    freopen("khuvuichoi.out","w",stdout);

    solve();
    return 0;
}
