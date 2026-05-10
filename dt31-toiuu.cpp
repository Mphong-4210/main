#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);

    int m, n;
    cin >> m >> n;

    vector<vector<char>> a(m, vector<char>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    vector<char> colors = {'D', 'V', 'X'};

    int best_len = -1;
    int best_row = -1;
    char best_color;

    for (int i = 0; i < m; i++) {
        for (char c : colors) {
            vector<char> b(n);
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 'T') b[j] = c;
                else b[j] = a[i][j];
            }

            int cur = 0, mx = 0;

            for (int k = 0; k < 2 * n; k++) {
                if (b[k % n] == c) {
                    cur++;
                    mx = max(mx, cur);
                } else cur = 0;
            }

            mx = min(mx, n);

            if (mx > best_len ||
               (mx == best_len && (i < best_row ||
               (i == best_row && c < best_color)))) {
                best_len = mx;
                best_row = i;
                best_color = c;
            }
        }
    }

    cout << best_len << "\n";
    cout << best_row + 1 << " " << best_color;

    return 0;
}
