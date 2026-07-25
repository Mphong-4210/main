#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("quantrong.inp", "r", stdin);
    freopen("quantrong.out", "w", stdout);

    int n;
    cin >> n;

    vector<long long> s(n + 1);
    unordered_map<int, int> l, r;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s[i] = s[i - 1] + x;
        if (!l.count(x)) l[x] = i;
        r[x] = i;
    }

    long long ans = 0;

    for (auto i : l) {
        int x = i.first;
        ans = max(ans, s[r[x]] - s[l[x] - 1]);
    }

    cout << ans;
    return 0;
}
