#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float
#define ldb long double
#define str string
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
#define bend(x) (x).begin(), (x).end()i
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

void solve(){
    str s;
    cin >> s;

    int n=s.size();

    vector<int> a(n);

    for(int i=0;i<n;i++){
        if(s[i]=='R') a[i]=0;
        else if(s[i]=='Y') a[i]=1;
        else a[i]=2;
    }

    vector<int> dp(16,-1), ndp(16,-1);

    dp[15]=0;

    for(int i=0;i<n;i++){
        fill(ndp.begin(),ndp.end(),-1);

        for(int st=0;st<16;st++){
            if(dp[st]==-1) continue;

            int x=st/4;
            int y=st%4;

            ndp[st]=max(ndp[st],dp[st]);

            int c=a[i];

            if(x==3 && y==3){
                int ns=3*4+c;
                ndp[ns]=max(ndp[ns],dp[st]+1);
            }
            else if(x==3){
                int ns=y*4+c;
                ndp[ns]=max(ndp[ns],dp[st]+1);
            }
            else{
                if(y==c || x==c || x==y) continue;

                int ns=y*4+c;
                ndp[ns]=max(ndp[ns],dp[st]+1);
            }
        }

        dp.swap(ndp);
    }

    cout << *max_element(dp.begin(),dp.end());
}

int main(){
    ffopen("bougain");
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
