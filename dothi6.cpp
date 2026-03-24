#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float
#define str string
#define ldb long double

#define vll vector<ll>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define dq deque<ll>

#define pb push_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MaxN = 2005;

ll n, m, s;
vector<ll> adj[MaxN];
bool vis[MaxN];

void dfs(ll u){
    vis[u] = 1;
    cout << u << " ";
    for(auto v : adj[u]){
        if(!vis[v]) dfs(v);
    }
}

void solve(){
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++){
        ll u, v; cin >> u >> v;
        adj[u].pb(v);
    }
    for(int i = 1; i <= n; i++){
        sort(all(adj[i]));
    }
    dfs(s);
}

int main(){
    fast;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    solve();
    return 0;
}
