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
    string a, b;
    cin >> a >> b;

    bool neg = false;

    if (a.size() < b.size() || (a.size() == b.size() && a < b)){
        swap(a, b);
        neg = true;
    }

    int len = max(a.size(), b.size());

    while ((int)a.size() < len) a = '0' + a;
    while ((int)b.size() < len) b = '0' + b;

    string res(len, '0');
    int borrow = 0;

    for (int i = len - 1; i >= 0; i--){
        int x = a[i] - '0' - borrow;
        int y = b[i] - '0';

        if (x < y){
            x += 2;
            borrow = 1;
        }
        else borrow = 0;

        res[i] = char(x - y + '0');
    }

    int pos = 0;
    while (pos + 1 < (int)res.size() && res[pos] == '0') pos++;

    if (neg) cout << '-';
    cout << res.substr(pos);
}
 
int main(){
    ffopen("Bai2");
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
