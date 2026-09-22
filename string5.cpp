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
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FORN(i,a,b) for(ll i=a;i>=b;i--)

// Phong

const ll INF = 4e18;
const ll NINF = -4e18;
const ll MAXN = 1e6 + 42;
const ll MAXM = 1e3;
const ll MOD = 1000000007;

void solve(){
    string s1, s2;
    cin >> s1 >> s2;

    ll dem = 0;
    vector<ll> vt;

    for(ll i = 0; i + s1.size() <= s2.size(); i++){
        bool ok = true;

        for(ll j = 0; j < s1.size(); j++){
            if(s1[j] != s2[i + j]){
                ok = false;
                break;
            }
        }

        if(ok){
            dem++;
            vt.pb(i + 1);
        }
    }

    cout << dem << el;

    if(dem > 0){
        for(ll x : vt)
            cout << x << " ";
        cout << el;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("DEMXAU.INP", "r", stdin);
    freopen("DEMXAU.OUT", "w", stdout);

    solve();

    return 0;
}
