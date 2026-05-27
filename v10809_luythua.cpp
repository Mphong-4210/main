#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("LT.IN", "r", stdin);
    freopen("LT.OU", "w", stdout);

    int n, m;
    cin >> n >> m;

    double a = n * log10(2.0);
    double b = m * log10(3.0);

    if (a < b) swap(a, b);

    double x = a + log10(1.0 + pow(10.0, b - a));

    double frac = x - floor(x);

    int ans = (int)(pow(10.0, frac) + 1e-9);

    cout << ans;

    return 0;
}
