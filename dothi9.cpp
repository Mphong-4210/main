#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10005;
vector<int> adj[MAXN];
bool visited[MAXN];
int n, m, u, v;
int ans = 0;

void dfs(int x, int cnt) {
    if (x == v) {
        ans = max(ans, cnt);
        return;
    }

    for (int y : adj[x]) {
        if (!visited[y]) {
            visited[y] = true;
            dfs(y, cnt + 1);
            visited[y] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        freopen("DDDN.INP", "r", stdin);
        freopen("DDDN.OUT", "w", stdout);


    cin >> n >> m >> u >> v;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    visited[u] = true;
    dfs(u, 0);

    cout << ans;

    return 0;
}
