#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define pii pair<int,int>
#define vect vector
#define bend(v) v.begin(),v.end()
#define ms ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MaxN = 1005;

int n, m;
vect<int> adj[MaxN];
bool vis[MaxN];

void dfs(int u){
    vis[u] = 1;
    for(int v : adj[u]){
        if(!vis[v]) dfs(v);
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        vis[i] = 0;
    }
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            ans++;
        }
    }
    cout << ans;
}

int main(){
    ms;
    solve();
}
