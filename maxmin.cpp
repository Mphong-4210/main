#include <bits/stdc++.h>
using namespace std;

#define el "\n"
const int N = 1005;
int a[N][N];

int main() {
    freopen("MAXMIN.INP", "r", stdin);
    freopen("MAXMIN.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    int colMax[N];
    for (int j = 1; j <= n; j++) {
        int mx = a[1][j];
        for (int i = 2; i <= m; i++) {
            mx = max(mx, a[i][j]);
        }
        colMax[j] = mx;
    }

    int minOfMax = colMax[1];
    for (int j = 2; j <= n; j++) {
        if (colMax[j] < minOfMax) minOfMax = colMax[j];
    }
    for (int j = 1; j <= n; j++) {
        if (colMax[j] == minOfMax) cout << j << " ";
    }

    return 0;
}
