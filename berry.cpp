#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int h = k / 2;
    ll ans = 0;

    for (int i = n - k; i < n - h; i++)
        ans += a[i];

    cout << ans;

    return 0;
}
