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
#define ret return
#define el '\n'
#define si size()
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define bend(x) (x).begin(), (x).end()
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

ll nghiem1(ll a, ll b, ll c){
    ll delta1=b*b-4*a*c;
    if(delta1>=0){
        return -(b+sqrt(delta1))/(2*a);
    }
    else{
        return 0;
    }
}

ll nghiem2(ll a, ll b, ll c){
    ll delta2=b*b-4*a*c+1;
    if(delta2>=0){
        return (-b-sqrt(delta2))/(2*a);
    }
    else{
        return 0;
    }
}

void solve(){
    ll n, ans=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int x=1; x<=n; x++){
        for(int y=1; y<=n; y++){
            for(int z=1; z<=n; z++){
                if(x!=y && y!=z && x!=z){
                    if(a[x]-a[y]+a[z]==0)
                        ans++;
                }
            }
        }
    }
    cout<<ans;
}
 
int main(){
    ffopen("ptb2");
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
