#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int n;
int d[505][505], nxt[505][505];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("HLD.INP", "r", stdin);
    freopen("HLD.OUT", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> d[i][j];
            if (i != j && d[i][j] == 0) d[i][j] = INF;
            nxt[i][j] = j;
        }
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (d[i][k] == INF || d[k][j] == INF) continue;
                if (d[i][k] + d[k][j] < d[i][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                    nxt[i][j] = nxt[i][k];
                }
            }
        }
    }

    int best_city = 1, best_max = INF;

    for (int i = 1; i <= n; i++) {
        int mx = 0;
        bool ok = true;

        for (int j = 1; j <= n; j++) {
            if (d[j][i] == INF) {
                ok = false;
                break;
            }
            mx = max(mx, d[j][i]);
        }

        if (!ok) mx = INF;

        if (mx < best_max || (mx == best_max && i < best_city)) {
            best_max = mx;
            best_city = i;
        }
    }

    cout << best_city << " " << best_max << "\n";

    for (int i = 1; i <= n; i++) {
        if (i == best_city) continue;

        int u = i, v = best_city;

        cout << u;
        while (u != v) {
            u = nxt[u][v];
            cout << " " << u;
        }
        cout << "\n";
    }

    return 0;
}
