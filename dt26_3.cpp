#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("sodacbiet.inp", "r", stdin);
    freopen("sodacbiet.out", "w", stdout);

    int l, r;
    cin >> l >> r;

    vector<int> s(r + 1);

    for (int i = 1; i <= r / 2; i++) {
        for (int j = i * 2; j <= r; j += i) {
            s[j] += i;
        }
    }

    int dem = 0;
    for (int i = l; i <= r; i++) {
        if (s[i] > i) dem++;
    }

    cout << dem;
    return 0;
}
