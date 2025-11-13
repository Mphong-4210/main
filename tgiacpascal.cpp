#include <bits/stdc++.h>
using namespace std;

#define el "\n"
const int N = 105;
long long a[N][N];

int main() {
    freopen("PASCAL.INP", "r", stdin);
    freopen("PASCAL.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    a[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        a[i][0] = 1;
        a[i][i] = 1;
        for (int j = 1; j < i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a[i][j];
            if (j < i) cout << " ";
        }
        cout << el;
    }
    return 0;
}
