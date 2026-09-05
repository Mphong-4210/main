#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using i128 = __int128_t;

ll N, K, M;

bool check(ll X) {
    ll R = N;
    ll days = K;

    while (days > 0) {
        if ((i128)R < (i128)X * (M + 1)) {
            return R == (i128)days * M;
        }

        ll pay = R / X;

        R -= pay;
        days--;

        if (R < 0) return false;
    }

    return R == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K >> M;

    ll l = 1, r = N, ans = 1;

    while (l <= r) {
        ll mid = l + (r - l) / 2;

        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}
