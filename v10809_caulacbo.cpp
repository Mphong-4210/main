#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

struct CLB {
    int l, r;
};

bool cmp(CLB a, CLB b) {
    if (a.r == b.r) return a.l < b.l;
    return a.r < b.r;
}

int main() {
    freopen("CLB.IN", "r", stdin);
    freopen("CLB.OU", "w", stdout);

    int n;
    cin >> n;

    vector<CLB> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r;
    }

    sort(a.begin(), a.end(), cmp);

    vector<int> chosen;

    for (int i = 0; i < n; i++) {
        int cnt = 0;

        for (int x : chosen) {
            if (a[i].l <= x && x <= a[i].r) cnt++;
        }

        if (cnt >= 2) continue;

        if (cnt == 0) {
            chosen.push_back(a[i].r - 1);
            chosen.push_back(a[i].r);
        }
        else {
            chosen.push_back(a[i].r);
        }
    }

    cout << chosen.size();

    return 0;
}
