#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
const int MAXN = 200005;

vector<pair<int,int>> adj[MAXN];
long long dista[MAXN];
int parent[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("Dijkstra.inp", "r", stdin);
    freopen("Dijkstra.out", "w", stdout);

    int n, m, s;
    cin >> n >> m >> s;

    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        dista[i] = INF;
        parent[i] = -1;
    }

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
    dista[s] = 0;
    pq.push({0, s});

    while (!pq.empty()) {
        auto [du, u] = pq.top(); pq.pop();
        if (du != dista[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dista[v] > du + w) {
                dista[v] = du + w;
                parent[v] = u;
                pq.push({dista[v], v});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i == s) continue;
        if (dista[i] == INF) continue;

        vector<int> path;
        int cur = i;
        while (cur != -1) {
            path.push_back(cur);
            cur = parent[cur];
        }
        reverse(path.begin(), path.end());

        cout << s << " " << i << " " << dista[i];
        for (int x : path) cout << " " << x;
        cout << "\n";
    }

    return 0;
}
