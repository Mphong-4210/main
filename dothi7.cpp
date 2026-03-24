#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, s, t;
    cin >> n >> m >> s >> t;

    if (s < 1 || s > n || t < 1 || t > n) {
        cout << -1 << "\n";
        return 0;
    }

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        if (u < 1 || u > n || v < 1 || v > n || u == v) continue;
        adj[u].push_back(v);
    }

    for (int i = 1; i <= n; i++) sort(adj[i].begin(), adj[i].end());

    vector<bool> visited(n + 1, false);
    vector<int> prev(n + 1, -1);

    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (u == t) break;
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                prev[v] = u;
                q.push(v);
            }
        }
    }

    if (!visited[t]) {
        cout << -1 << "\n";
    } else {
        vector<int> path;
        for (int cur = t; cur != -1; cur = prev[cur])
            path.push_back(cur);
        reverse(path.begin(), path.end());
        for (int x : path) cout << x << " ";
        cout << "\n";
    }
}
