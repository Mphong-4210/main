#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("CANHNHAU.INP", "r", stdin);
    freopen("CANHNHAU.OUT", "w", stdout);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<vector<int>> adj(N + 1);

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        if (u >= 1 && u <= N && v >= 1 && v <= N) {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    for (int i = 1; i <= N; i++) {
        if (adj[i].empty()) {
            cout << 0;
        } else {
            sort(adj[i].begin(), adj[i].end());
            // xóa phần tử trùng nếu có
            adj[i].erase(unique(adj[i].begin(), adj[i].end()), adj[i].end());
            for (int j = 0; j < (int)adj[i].size(); j++) {
                if (j > 0) cout << ' ';
                cout << adj[i][j];
            }
        }
        cout << '\n';
    }

    return 0;
}
