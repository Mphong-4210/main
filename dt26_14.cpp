#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        a[i].assign(k, '0');
        for (int j = k - 1; j >= 0; j--) {
            cin >> a[i][j];
        }
    }
    sort(a.begin(), a.end());
    vector<bool> vis(n, false);
    string kq;
    for (int i = 0; i < n; i++) {
        if (a[i][0] != '0') {
            kq += a[i];
            vis[i] = true;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            kq += a[i];
        }
    }
    cout << kq;
    return 0;
}
