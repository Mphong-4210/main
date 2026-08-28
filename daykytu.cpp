#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    freopen("DKT.INP", "r", stdin);
    freopen("DKT.OUT", "w", stdout);

    ll n;
    cin >> n;

    ll pos = n * (n + 1) / 2 + 1;

    cout << char('A' + (pos - 1) % 26);

    return 0;
}
