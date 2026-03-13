
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

#define bend(v) v.begin(), v.end()
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define dq deque<int>
#define ub upper_bound
#define lb lower_bound
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

vector<int> a[50001];

void solve(){
    ll n, q;
    cin>>n>>q;
    for(int i=0; i<n; i++){
        ll z;
        cin>>z;
        a[z].pb(i);
    }

    while(q--){
        ll l, r, x;
        cin>>l>>r>>x;
        l--; r--;
        int ans=ub(bend(a[x]), r)-lb(bend(a[x]), l);
        cout<<ans<<el;
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
