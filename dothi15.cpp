#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

typedef long long ll;

const int N = 1005;

int n, m;
int par[N], sz[N];

struct edge {
    int u, v, w;
};

vector<edge> a;

int find(int u) {
    if (u == par[u]) return u;
    return par[u] = find(par[u]);
}

bool unite(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return false;
    if (sz[u] < sz[v]) swap(u, v);
    par[v] = u;
    sz[u] += sz[v];
    return true;
}

void ffopen() {
    freopen("Noiday.inp", "r", stdin);
    freopen("Noiday.out", "w", stdout);
}

void solve() {
    cin >> n >> m;
    a.resize(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i].u >> a[i].v >> a[i].w;
    }

    sort(a.begin(), a.end(), [](edge x, edge y) {
        return x.w < y.w;
    });

    for (int i = 1; i <= n; i++) {
        par[i] = i;
        sz[i] = 1;
    }

    ll res = 0;

    for (auto e : a) {
        if (unite(e.u, e.v)) {
            res += e.w;
        }
    }

    cout << res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ffopen();

    solve();
}
