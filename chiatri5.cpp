#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int &v : a) cin >> v;

    int l = 0, r = n - 1;
    int ans = -1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (a[mid] <= x) {
            ans = a[mid];
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans;

    return 0;
}
