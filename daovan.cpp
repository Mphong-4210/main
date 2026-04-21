#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string A, B;

void solve() {
    cin >> A >> B;
    int n = A.size();
    int m = B.size();

    ll ans = 0;

    for (int i = 0; i + m <= n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i + j] == B[j]) ans++;
        }
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
