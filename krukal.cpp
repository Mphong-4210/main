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
#define bend(x) (x).begin(), (x).end()
#define ret return
#define el '\n'
#define si size()
#define fi first
#define se second
#define pb push_back
#define pob pop_back
// good luck coding:)

const ll INF = 1e18, NINF = -1e18;
const int MAXN=1e6+42, N=1e3, MOD=1000000007;
const int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1};
ll a[MAXN], dem[MAXN], y[N][N], pre[MAXN];
ll parent[MAXN], sz[MAXN];

void manhphong(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void ffopen(string name){
    string infile=name + ".inp";
    string outfile=name + ".out";
    if(FILE* f = fopen(infile.c_str(), "r")){
        fclose(f);
        freopen(infile.c_str(), "r", stdin);
        freopen(outfile.c_str(), "w", stdout);
    }
}
struct b{
    ll x, y, z;
};

bool cmp(b A, b B){
    return A.z < B.z;
}

ll find(ll x){
    if(parent[x]==x) return x;
    return parent[x]=find(parent[x]);
}

bool unite(ll a, ll b){
    a=find(a);
    b=find(b);
    if(a==b) return false;
    if(sz[a]<sz[b]) swap(a,b);
    parent[b]=a;
    sz[a]+=sz[b];
    return true;
}

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<b> canh;
    for(int i=1; i<=m; i++){
        ll x, y, xy;
        cin>>x>>y>>xy;
        canh.pb({x, y, xy});
    }

    sort(bend(canh), cmp);

    for(int i=1; i<=n; i++){
        parent[i]=i;
        sz[i]=1;
    }

    ll res=0, cnt=0;

    for(auto e: canh){
        if(unite(e.x, e.y)){
            res+=e.z;
            cnt++;
            if(cnt==n-1) break;
        }
    }

    if(cnt!=n-1) cout<<"IMPOSSIBLE";
    else cout<<res;
}

int main(){
    ffopen("Kruskal");
    manhphong();
    solve();
}

/*
   ____  _                             
  |  _ \| |__   ___  _ __   __ _ 
  | |_) | '_ \ / _ \| '_ \ / _` |
  |  __/| | | | (_) | | | | (_| |
  |_|   |_| |_|\___/|_| |_|\__, |
                           |___/       
                           
*/
