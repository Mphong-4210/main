#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
vector<int> adj[MAXN];
bool visited[MAXN];
int parent[MAXN];

int n, m, s, t;

bool dfs(int u) {
    visited[u] = true;
    if (u == t) return true;

    for (int v : adj[u]) {
        if (!visited[v]) {
            parent[v] = u;
            if (dfs(v)) return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> s >> t;

    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));

    if (!dfs(s)) {
        cout << -1;
        return 0;
    }

    vector<int> path;
    for (int v = t; v != -1; v = parent[v]) {
        path.push_back(v);
    }

    reverse(path.begin(), path.end());

    for (int x : path) {
        cout << x << " ";
    }

    return 0;
}
