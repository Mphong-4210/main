#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

vector<int> adj[MAXN];
int num[MAXN], low[MAXN];
int n, m, timer = 0;
int bridgeCount = 0;

void dfs(int u, int parent) {
    num[u] = low[u] = ++timer;

    for (int v : adj[u]) {
        if (v == parent) continue;

        if (!num[v]) {
            dfs(v, u);
            low[u] = min(low[u], low[v]);

            if (low[v] > num[u]) {
                bridgeCount++;
            }
        } else {
            low[u] = min(low[u], num[v]);
        }
    }
}

int main() {
    freopen("CAU.INP", "r", stdin);
    freopen("CAU.OUT", "w", stdout);

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!num[i]) {
            dfs(i, -1);
        }
    }

    cout << bridgeCount;
}
