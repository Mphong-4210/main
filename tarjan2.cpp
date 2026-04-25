
#include<bits/stdc++.h>
using namespace std;

#define el '\n'

const int N = 1005;

int n;
int a[N][N];
int dist[N][N];

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

void solve(){
    cin >> n;
    int s, t, u, v;
    cin >> s >> t >> u >> v;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            dist[i][j] = -1;
        }
    }

    if(a[s][t] == 0 || a[u][v] == 0){
        cout << -1;
        return;
    }

    queue<pair<int,int>> q;
    q.push({s, t});
    dist[s][t] = 0;

    while(!q.empty()){
        auto cur = q.front(); q.pop();
        int x = cur.first, y = cur.second;

        for(int k = 0; k < 8; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(nx >= 1 && nx <= n && ny >= 1 && ny <= n){
                if(a[nx][ny] == 1 && dist[nx][ny] == -1){
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    cout << dist[u][v];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
