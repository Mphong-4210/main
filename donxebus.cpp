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

#define pb push_back
#define fi first
#define se second

#define sz(x) (ll)(x.size())
#define all(x) x.begin(), x.end()

const ll INF = 1e18;
const ll mod = 1e9+7;

void solve(){
    ll n, k, m;
    cin >> n >> k >> m;

    vll a;
    for(ll i=1; i<=n; i++){
        ll s, t;
        cin>>s>>t;
        ll aa=t-(s-1);
        a.pb(aa);
    }

    sort(all(a));

    cout<<a[k-1];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}