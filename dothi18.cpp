#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

typedef long long ll;

const int N = 125;

int n, m;
vector<int> adj[N];
bool vis[N];
vector<int> path;
bool ok = false;

void ffopen() {
    freopen("Hamilton.inp", "r", stdin);
    freopen("Hamilton.out", "w", stdout);
}

void dfs(int u) {
    if (ok) return;

    if ((int)path.size() == n) {
        for (int v : adj[u]) {
            if (v == 1) {
                path.push_back(1);
                ok = true;
                return;
            }
        }
        return;
    }

    for (int v : adj[u]) {
        if (!vis[v]) {
            vis[v] = true;
            path.push_back(v);
            dfs(v);
            if (ok) return;
            path.pop_back();
            vis[v] = false;
        }
    }
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vis[1] = true;
    path.push_back(1);

    dfs(1);

    if (!ok) {
        cout << 0;
        return;
    }

    for (int x : path) cout << x << ' ';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ffopen();

    solve();
}
