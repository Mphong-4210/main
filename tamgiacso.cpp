#include <bits/stdc++.h>
using namespace std;

int n;
int a[105][105];
int dp[105][105];
pair<int,int> trace[105][105];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> a[i][j];

    dp[1][1] = a[1][1];

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            int from1 = -1e9, from2 = -1e9;

            if (j <= i-1) from1 = dp[i-1][j];
            if (j-1 >= 1) from2 = dp[i-1][j-1];

            if (from1 > from2) {
                dp[i][j] = from1 + a[i][j];
                trace[i][j] = {i-1, j};
            } else {
                dp[i][j] = from2 + a[i][j];
                trace[i][j] = {i-1, j-1};
            }
        }
    }

    int best = -1e9, pos = 1;
    for (int j = 1; j <= n; j++) {
        if (dp[n][j] > best) {
            best = dp[n][j];
            pos = j;
        }
    }

    cout << best << "\n";

    vector<pair<int,int>> path;
    int i = n, j = pos;

    while (i >= 1) {
        path.push_back({i, j});
        auto p = trace[i][j];
        i = p.first;
        j = p.second;
        if (i == 0) break;
    }

    reverse(path.begin(), path.end());

    for (auto &p : path)
        cout << p.first << " " << p.second << "\n";
}
