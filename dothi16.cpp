#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

typedef long long ll;

const int N = 205;
const int LOG = 10;

int n, m;
vector<int> adj[N];
int depth[N], par[N][LOG];

void dfs(int u, int p) {
    for (int v : adj[u]) {
        if (v == p) continue;
        depth[v] = depth[u] + 1;
        par[v][0] = u;
        for (int j = 1; j < LOG; j++) {
            par[v][j] = par[par[v][j-1]][j-1];
        }
        dfs(v, u);
    }
}

int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);

    int diff = depth[u] - depth[v];
    for (int j = 0; j < LOG; j++) {
        if (diff & (1 << j)) u = par[u][j];
    }

    if (u == v) return u;

    for (int j = LOG - 1; j >= 0; j--) {
        if (par[u][j] != par[v][j]) {
            u = par[u][j];
            v = par[v][j];
        }
    }

    return par[u][0];
}

int dist(int u, int v) {
    int w = lca(u, v);
    return depth[u] + depth[v] - 2 * depth[w];
}

void ffopen() {
    freopen("Kvuichoi.inp", "r", stdin);
    freopen("Kvuichoi.out", "w", stdout);
}

void solve() {
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    depth[1] = 0;
    dfs(1, 0);

    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];

    ll res = 0;
    for (int i = 0; i < m - 1; i++) {
        res += dist(a[i], a[i+1]);
    }

    cout << res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ffopen();

    solve();
}
