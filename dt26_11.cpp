
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
    if(n<=1e3){
        ll res=0;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                if(a[i]!=a[j]){
                    if(a[i]%a[j]==0 || a[j]%a[i]==0){
                        res++;
                    }
                }
            }
        }
        cout<<res;
    }
    else{
        ll mx=0;
        for(int i=1; i<=n; i++){
            ll x;
            cin>>x;
            dem[x]++;
            mx=max(mx, x);
        }
        ll res=0;
        for(int i=1; i<=mx; i++){
            if(!dem[i]){
                continue;
            }
            res+=(dem[i]*(dem[i]-1)/2);
            for(int j=2*i; j<=mx; j+=i){
                res+=(dem[i]*dem[j]);
            }
        }
        cout<<res;
    }
}

signed main(){
    ffopen("PDIV");

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
