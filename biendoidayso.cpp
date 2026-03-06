
#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float

#define vll vector<ll>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define dq deque<int>

#define el '\n'
#define fi first
#define se second
#define pb push_back
#define pob pop_back

const ll INF = 1e18, NINF = -1e18;
const int MAXN=1e6+42, N=1e3, MOD=1000000007;
const int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1};
ll a[MAXN], dem[MAXN], y[N][N], pre[MAXN], mx[MAXN];

void manhphong(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void ffopen(string name){
    string infile=name+".inp";
    string outfile=name+".out";
    if(FILE* f=fopen(infile.c_str(), "r")){
        fclose(f);
        freopen(infile.c_str(), "r", stdin);
        freopen(outfile.c_str(), "w", stdout);
    }
}

void solve(){
    ll n, ans=NINF;
    cin>>n;
    cin>>a[1];
    pre[1]=a[1];
    for(int i=2; i<=n; i++){
        cin>>a[i];
        pre[i]=pre[i-1]+a[i];
    }
    ll sum=pre[n];
    for(int i=1; i<=n; i++){
        mx[i]=max(mx[i-1], pre[i]);
    }
    for(int j=1; j<=n; j++){
        ans=max(ans, sum-2*(pre[j]-mx[j-1]));
    }
    cout<<ans;
    
}

int main(){
    //ffopen("CSEQ");
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
               /\_/\
              ( o.o )
               > ^ <
               /   \
*/