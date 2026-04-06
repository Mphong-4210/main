#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;

int n, m;
int parent[MAXN], rnk[MAXN];

int find_set(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        rnk[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        int pu = find_set(u);
        int pv = find_set(v);

        if (pu == pv) {
            cout << 1;
            return 0;
        }

        if (rnk[pu] < rnk[pv]) {
            parent[pu] = pv;
        } else if (rnk[pu] > rnk[pv]) {
            parent[pv] = pu;
        } else {
            parent[pv] = pu;
            rnk[pu]++;
        }
    }

    cout << 0;
    return 0;
}
