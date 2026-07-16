#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200000 + 5;
long long st[4 * MAXN];
int n, q;
void update(int id, int l, int r, int vt, long long val) {
    if (l == r) {
        st[id] = val;
        return;
    }
    int mid = (l + r) / 2;
    if (vt <= mid)
        update(id * 2, l, mid, vt, val);
    else
        update(id * 2 + 1, mid + 1, r, vt, val);
    st[id] = st[id * 2] + st[id * 2 + 1];
}
long long solve(int id, int l, int r, int u, int v) {
    if (u > r || v < l) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = (l + r) / 2;
    return solve(id * 2, l, mid, u, v) +
           solve(id * 2 + 1, mid + 1, r, u, v);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    while (q--) {
        int x;
        cin >> x;
        if (x == 1) {
            int k;
            long long u;
            cin >> k >> u;
            update(1, 1, n, k, u);
        } else {
            int a, b;
            cin >> a >> b;
            cout << solve(1, 1, n, a, b) << '\n';
        }
    }
    return 0;
}
