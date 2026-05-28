#include <bits/stdc++.h>
using namespace std;

struct Fraction {
    int tu, mau;
};

bool cmp(const Fraction& a, const Fraction& b) {
    return 1LL * a.tu * b.mau < 1LL * b.tu * a.mau;
}

int main() {
    freopen("PS.INP", "r", stdin);
    freopen("PS.OUT", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, k;
    cin >> m >> n >> k;

    vector<int> a(m), b(n);

    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    set<pair<int,int>> s;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int g = gcd(a[i], b[j]);

            int tu = a[i] / g;
            int mau = b[j] / g;

            s.insert({tu, mau});
        }
    }

    vector<Fraction> p;

    for (auto x : s) {
        p.push_back({x.first, x.second});
    }

    sort(p.begin(), p.end(), cmp);

    cout << p[k - 1].tu << ' ' << p[k - 1].mau;

    return 0;
}
