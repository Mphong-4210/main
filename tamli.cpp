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
    int n;
    cin>>n;
    vll a(n);
    for(ll &x : a){
        cin>>x;
    }
    sort(a.begin(), a.end());
    int m;
    cin>>m;
    while(m--){
        ll l, r;
        cin>>l>>r;
        ll ans=upper_bound(a.begin(), a.end(), r)
              -lower_bound(a.begin(), a.end(), l);
        cout<<ans<<el;
    }
}

signed main(){
    ffopen("TAMLI");

    manhphong();

    solve();
    
    ret 0;
}
