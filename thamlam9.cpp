#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'

ll n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    cin >> n;

    int res = 0;

    while (n > 0) {
        ll tmp = n;
        int mx = 0;

        while (tmp > 0) {
            mx = max(mx, (int)(tmp % 10));
            tmp /= 10;
        }

        n -= mx;
        res++;
    }

    cout << res;
    return 0;
}
