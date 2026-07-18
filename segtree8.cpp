#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
string s;
int st[4 * MAXN];
int n, q;
void build(int id, int l, int r) {
    if (l == r) {
        st[id] = 1 << (s[l - 1] - 'a');
        return;
    }
    int mid = (l + r) / 2;
    build(id * 2, l, mid);
    build(id * 2 + 1, mid + 1, r);
    st[id] = st[id * 2] | st[id * 2 + 1];
}
void update(int id, int l, int r, int vt, char c) {
    if (l == r) {
        st[id] = 1 << (c - 'a');
        return;
    }
    int mid = (l + r) / 2;
    if (vt <= mid)
        update(id * 2, l, mid, vt, c);
    else
        update(id * 2 + 1, mid + 1, r, vt, c);
    st[id] = st[id * 2] | st[id * 2 + 1];
}
int get(int id, int l, int r, int u, int v) {
    if (u <= l && r <= v) return st[id];
    if (r < u || l > v) return 0;
    int mid = (l + r) / 2;
    return get(id * 2, l, mid, u, v) |
           get(id * 2 + 1, mid + 1, r, u, v);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    n = s.size();
    build(1, 1, n);
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        if (x == 1) {
            int vt;
            char c;
            cin >> vt >> c;
            update(1, 1, n, vt, c);
        } else {
            int l, r;
            cin >> l >> r;
            int kq = get(1, 1, n, l, r);
            cout << __builtin_popcount(kq) << '\n';
        }
    }
    return 0;
}
