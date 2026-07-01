#pragma GCC optimize("O3,unroll-loops")
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
#define FOR(i,a,b) for(int i=(a); i<=(b); i++)
#define FORN(i,a,b) for(int i=(a); i>=(b); i--)
// Phong

const ll INF = 1e18, NINF = -1e18;
const int MAXN=1e6+42, N=1e3, MOD=1000000007;
const int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1};
ll a[MAXN], dem[MAXN], y[N][N], pre[MAXN];

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

bool prime[200005];

void sang(){
    fill(prime, prime + 200005, true);

    prime[0] = prime[1] = false;

    for(int i=2; i*i<=200000; i++){
        if(prime[i]){
            for(int j=i*i; j<=200000; j+=i){
                prime[j] = false;
            }
        }
    }
}

void solve(){
    sang();
    ll T;
    cin>>T;
    ll a, b, c, d;
    ll x, y;
    while(T--){
        bool ok=true;
        cin>>a>>b>>c>>d;
        for(int i=a; i<=b; i++){
            bool found = false;
            for(int j=c; j<=d; j++){
                if(prime[i+j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                ok = false;
                break;
            }
        }
        if(!ok){
            cout<<"Tam"<<el;
        }
        else{
            cout<<"Cam"<<el;
        }
    }
}

int main(){
    ffopen("game");
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
