#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 1000+5;

int n, m, s;
int ke[MAXN][MAXN];  
int bac[MAXN];      
bool daTham[MAXN]; 

void bfs(int batDau) {
    queue<int> q;
    
    q.push(batDau);
    daTham[batDau] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        cout << u << " ";

        for (int i = 0; i < bac[u]; i++) {
            int v = ke[u][i];
            if (!daTham[v]) {
                daTham[v] = true;
                q.push(v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        ke[u][bac[u]++] = v;
        ke[v][bac[v]++] = u;
    }
    for (int i = 1; i <= n; i++) {
        sort(ke[i], ke[i] + bac[i]);
    }

    bfs(s);

    return 0;
}
