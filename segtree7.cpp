#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100000 + 5;
int n, q;
long long a[MAXN];
long long st[4 * MAXN];
long long gcd(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
void solve1(int id, int l, int r) {
    if (l == r) {
        st[id] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    solve1(id * 2, l, mid);
    solve1(id * 2 + 1, mid + 1, r);
    st[id] = gcd(st[id * 2], st[id * 2 + 1]);
}
void solve2(int id, int l, int r, int vt, long long val) {
    if (l == r) {
        st[id] = val;
        return;
    }
    int mid = (l + r) / 2;
    if (vt <= mid)
        solve2(id * 2, l, mid, vt, val);
    else
        solve2(id * 2 + 1, mid + 1, r, vt, val);
    st[id] = gcd(st[id * 2], st[id * 2 + 1]);
}
long long find(int id, int l, int r, int u, int v) {
    if (v < l || r < u) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = (l + r) / 2;
    return gcd(find(id * 2, l, mid, u, v),
                 find(id * 2 + 1, mid + 1, r, u, v));
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    solve1(1, 1, n);
    while (q--) {
        int x;
        cin >> x;
        if (x == 1) {
            int u;
            long long x;
            cin >> u >> x;
            solve2(1, 1, n, u, x);
        } else {
            int l, r;
            cin >> l >> r;
            cout << find(1, 1, n, l, r) << '\n';
        }
    }
    return 0;
}
