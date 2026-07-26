#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("PHANTICH.INP", "r", stdin);
    freopen("PHANTICH.OUT", "w", stdout);

    const int M = 1000;

    vector<int> nt;
    vector<bool> p(M + 1, true);
    p[0] = p[1] = false;
    for (int i = 2; i * i <= M; i++)
        if (p[i])
            for (int j = i * i; j <= M; j += i)
                p[j] = false;

    for (int i = 2; i <= M; i++)
        if (p[i]) nt.push_back(i);

    vector<int> dp(M + 1, -1);
    dp[0] = 0;

    for (int x : nt) {
        for (int t = 0; t < 2; t++) {
            for (int j = M; j >= x; j--) {
                if (dp[j - x] != -1)
                    dp[j] = max(dp[j], dp[j - x] + 1);
            }
        }
    }

    dp[1] = 1;

    int n;
    while (cin >> n)
        cout << dp[n] << '\n';

    return 0;
}
