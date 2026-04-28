#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define ll long long

string s;

pair<int,int> expand(int l, int r) {
    while (l >= 0 && r < (int)s.size() && s[l] == s[r]) {
        l--;
        r++;
    }
    return {l + 1, r - 1};
}

void solve() {
    cin >> s;
    int n = s.size();

    int best_l = 0, best_r = 0;

    for (int i = 0; i < n; i++) {
        auto [l1, r1] = expand(i, i);
        if (r1 - l1 > best_r - best_l) {
            best_l = l1;
            best_r = r1;
        }

        auto [l2, r2] = expand(i, i + 1);
        if (r2 - l2 > best_r - best_l) {
            best_l = l2;
            best_r = r2;
        }
    }

    cout << s.substr(best_l, best_r - best_l + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
