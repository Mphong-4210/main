#include <bits/stdc++.h>
using namespace std;

struct Job {
    int a, b, c;
};

int main() {
    freopen("THUEMAY.INP", "r", stdin);
    freopen("THUEMAY.OUT", "w", stdout);

    int n;
    cin >> n;

    vector<Job> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i].a >> v[i].b >> v[i].c;
    }

    sort(v.begin() + 1, v.end(), [](Job &x, Job &y) {
        return x.b < y.b;
    });

    vector<long long> dp(n + 1);
    vector<int> cnt(n + 1);
    vector<int> endTime(n + 1);

    for (int i = 1; i <= n; i++) endTime[i] = v[i].b;

    for (int i = 1; i <= n; i++) {
        // tìm j sao cho B[j] < A[i]
        int j = lower_bound(endTime.begin() + 1, endTime.begin() + i, v[i].a) - endTime.begin() - 1;

        long long take = dp[j] + v[i].c;
        long long skip = dp[i - 1];

        if (take > skip) {
            dp[i] = take;
            cnt[i] = cnt[j] + 1;
        } else {
            dp[i] = skip;
            cnt[i] = cnt[i - 1];
        }
    }

    cout << cnt[n] << " " << dp[n];
    return 0;
}
