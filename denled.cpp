#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    if (n % 3 == 0)
        cout << 7 * (n / 3);
    else if (n % 3 == 1)
        cout << 7 * ((n - 4) / 3) + 4;
    else
        cout << 7 * ((n - 2) / 3) + 1;

    return 0;
}
