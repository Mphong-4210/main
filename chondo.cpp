#include <bits/stdc++.h>
using namespace std;

int n, V;
int a[155], b[155];
int dp[155][205];

int main() {
    cin >> n >> V;

    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= V; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= a[i])
                dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] + b[i]);
        }
    }

    cout << dp[n][V] << "\n";

    vector<int> res;
    int j = V;

    for (int i = n; i >= 1; i--) {
        if (j >= a[i] && dp[i][j] == dp[i-1][j-a[i]] + b[i]) {
            res.push_back(i);
            j -= a[i];
        }
    }

    reverse(res.begin(), res.end());

    for (int x : res)
        cout << x << " ";
}
