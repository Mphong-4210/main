#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

vector<int> adj[MAXN], rev_adj[MAXN];
bool visited[MAXN];

void dfs(int u, vector<int> graph[]) {
    visited[u] = true;
    for (int v : graph[u]) {
        if (!visited[v]) dfs(v, graph);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        rev_adj[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));
    dfs(1, adj);

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << 0;
            return 0;
        }
    }

    memset(visited, false, sizeof(visited));
    dfs(1, rev_adj);

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << 0;
            return 0;
        }
    }

    cout << 1;
    return 0;
}
