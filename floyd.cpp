#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
long long dista[505][505];
int nxt[505][505];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("Floyd.inp","r",stdin);
    freopen("Floyd.out","w",stdout);

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) dista[i][j] = 0;
            else dista[i][j] = INF;
            nxt[i][j] = -1;
        }
    }

    for(int i = 0; i < m; i++){
        int u, v;
        long long w;
        cin >> u >> v >> w;
        if(w < dista[u][v]){
            dista[u][v] = dista[v][u] = w;
            nxt[u][v] = v;
            nxt[v][u] = u;
        }
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(dista[i][k] + dista[k][j] < dista[i][j]){
                    dista[i][j] = dista[i][k] + dista[k][j];
                    nxt[i][j] = nxt[i][k];
                }
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) continue;
            cout << i << " " << j << " " << dista[i][j] << " ";
            vector<int> path;
            int u = i;
            while(u != j){
                path.push_back(u);
                u = nxt[u][j];
            }
            path.push_back(j);
            for(int x : path) cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}
