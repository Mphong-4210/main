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

#define ret return
#define el '\n'
#define sz size()
#define fi first
#define se second
#define pb push_back
#define pob pop_back
// good luck coding:)

const ll INF = 1e18, NINF = -1e18;
const int MAXN=1e6+42, N=1e3, MOD=1000000007;
const int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1};
ll a[MAXN], dem[MAXN], z[N][N], pre[MAXN];

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
    ll n, m;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
      ll x, y;
      cin>>x>>y;
      z[x][y]=1;
      z[y][x]=1;
    }
    for(int i=1; i<=n; i++){
      cout<< i <<" : ";
      for(int j=1; j<=n; j++){
        if(z[i][j]==1){
          cout<<j<<' ';
        }
      }
      cout<<el;
    }


}

int main(){
    //ffopen("filename");
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
