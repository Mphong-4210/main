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
const int MAXM=1e5+11;
ll v[MAXM], d[MAXM];

void solve(){
    string s;
    cin>>s;
    ll red=0, yellow=0;
    for(int i=0; i<s.si; i++){
        if(s[i]=='D'){
            red++;
            d[i]=red;
            v[i]=yellow;
        }
        else{
            yellow++;
            v[i]=yellow;
            d[i]=red;
        }
    }
    ll ans=0;

    
    for(ll l=0; l<s.si; l++){
        for(ll r=l+1; r<s.si; r++){
            ll vang=v[r]-v[l-1];
            ll sdo=d[r]-d[l-1];
            //cout<<l<<' '<<r<<' '<<vang<<' '<<sdo<<el;
            if(sdo*2==vang){
                ans=max(ans, r-l+1);
            }
        }
    }
    cout<<ans;
    
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
