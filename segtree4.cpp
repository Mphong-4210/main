#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef float fl;
typedef long double ldb;
typedef unsigned long long ull;
typedef string str;
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define dq deque<ll>
#define ret return
#define si size()
#define el '\n'
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define bend(x) (x).begin(), (x).end()
#define FOR(i,a,b) for(int i=(a); i<=(b); i++)
#define FORN(i,a,b) for(int i=(a); i>=(b); i--)
// Phong

const ll INF = 4e18, NINF = -4e18;
const int MAXN=1e6+42, MAXM=1e3, MOD=1000000007;
const int dx[4]={1,-1,0,0}, dy[4]={0,0,1,-1};
ll a[MAXN], dem[MAXN], y[MAXM][MAXM], pre[MAXN];

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

void solve(){
    ll n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    ll q;
    cin>>q;
    while(q--){
        ll type;
        cin>>type;
        if(type == 0){
            ll x, y;
            cin>>x>>y;
            a[x]=y;
        }
        else if(type == 1){
            ll y, z;
            cin>>y>>z;
            ll tong1=a[y], tong2=a[y];
            for(ll i=y+1; i<=z; i++){
                tong2=max(a[i], tong2+a[i]);
                if(tong2>tong1){
                    tong1=tong2;
                }
            }
            cout<<tong1<<el;
        }
    }
 
 
}

signed main(){
    //ffopen("filename");

    manhphong();

    solve();
    
    ret 0;
}

/*
   ____  _                             
  |  _ \| |__   ___  _ __   __ _ 
  | |_) | '_ \ / _ \| '_ \ / _` |
  |  __/| | | | (_) | | | | (_| |
  |_|   |_| |_|\___/|_| |_|\__, |
                           |___/                           
*/
