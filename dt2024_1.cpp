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
 
void solve(){
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    ll mau=lcm(b, d);
    ll tu1=a*mau/b;
    ll tu2=c*mau/d;

    ll tong = tu1 + tu2;
    ll g1 = gcd(llabs(tong), llabs(mau));
    ll tux = tong / g1;
    ll mau2 = mau / g1;
    if(mau2 < 0){
        tux = -tux;
        mau2 = -mau2;
    }

    cout << tux << " " << mau2 << el;

    ll hieu = tu1 - tu2;
    ll g2 = gcd(llabs(hieu), llabs(mau));
    ll tuy = hieu / g2;
    ll mau3 = mau / g2;
    if(mau3 < 0){
        tuy = -tuy;
        mau3 = -mau3;
    }

    cout << tuy << " " << mau3 << el;

    ll tich1=a*c, tich2=b*d;
    ll tich3 = gcd(abs(tich1), abs(tich2));
    if(tich2 < 0){
        tich1 = -tich1;
        tich2 = -tich2;
    }

    cout<<tich1/tich3<<" "<<tich2/tich3<<el;
    ll thuong1=a*d, thuong2=c*b;
    ll thuong3 = gcd(abs(thuong1), abs(thuong2));
    if(thuong2 < 0){
        thuong1 = -thuong1;
        thuong2 = -thuong2;
    }
    cout<<thuong1/thuong3<<" "<<thuong2/thuong3<<el;
}
 
int main(){
    ffopen("Bai1");
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
