#include <bits/stdc++.h>
using namespace std;

const long long INF = (long long)1e18;

int n, m, s, t;
long long X[1005];
vector<pair<int,int>> adj[1005];
long long dist[1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("CAPTION.INP", "r", stdin);
    freopen("CAPTION.OUT", "w", stdout);

    cin >> n >> m >> s >> t;

    for (int i = 1; i <= n; i++) cin >> X[i];

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    for (int i = 1; i <= n; i++) dist[i] = INF;

    priority_queue<pair<long long,int>,
                   vector<pair<long long,int>>,
                   greater<pair<long long,int>>> pq;

    if (0 <= X[s]) {
        dist[s] = 0;
        pq.push({0, s});
    }

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d != dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            long long nd = d + w;

            if (nd > X[v]) continue;

            if (nd < dist[v]) {
                dist[v] = nd;
                pq.push({nd, v});
            }
        }
    }

    if (dist[t] == INF) cout << -1;
    else cout << dist[t];

    return 0;
}
