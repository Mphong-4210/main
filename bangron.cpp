#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5 + 5;

string s;
int cnt[256];

void solve() {
    cin >> s;
    int n = s.size();

    ll total = 1LL * n * (n + 1) / 2;
    ll bad = 0;

    int l = 0;

    for (int r = 0; r < n; r++) {
        cnt[s[r]]++;
        while (cnt['O'] > 2 || cnt['L'] > 2 || cnt['P'] > 2) {
            cnt[s[l]]--;
            l++;
        }

        bad += (r - l + 1);
    }

    cout << total - bad;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
