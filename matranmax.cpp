#include <bits/stdc++.h>
using namespace std;

long long a[105][105], s[105][105];

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("MATRANMAX.INP", "r", stdin);
    freopen("MATRANMAX.OUT", "w", stdout);

    int m, n, m1, n1;
    cin >> m >> n >> m1 >> n1;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            s[i][j] = a[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];

    long long mx = LLONG_MIN;
    int r = 1, c = 1;

    for (int i = m1; i <= m; i++)
        for (int j = n1; j <= n; j++) {
            int x = i - m1 + 1, y = j - n1 + 1;
            long long t = s[i][j] - s[x-1][j] - s[i][y-1] + s[x-1][y-1];
            if (t > mx) {
                mx = t;
                r = x;
                c = y;
            }
        }
    cout << mx << '\n' << r << ' ' << c;
    #define int long long
}