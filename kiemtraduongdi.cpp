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

int n, m, q;
vect<int> adj[MaxN];
int comp[MaxN];

void dfs(int u, int id){
    comp[u] = id;
    for(int v : adj[u]){
        if(!comp[v]) dfs(v, id);
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        comp[i] = 0;
    }
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int id = 0;
    for(int i = 1; i <= n; i++){
        if(!comp[i]){
            id++;
            dfs(i, id);
        }
    }

    cin >> q;
    while(q--){
        int s, t;
        cin >> s >> t;
        if(comp[s] == comp[t]) cout << "1\n";
        else cout << "-1\n";
    }
}

int main(){
    ms;
    solve();
}
