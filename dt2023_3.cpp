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
#define bend(x) (x).begin(), (x).end()
#define ret return

ll n, m;
vll a;

void solve(){
    cin >> n >> m;

    a.resize(n);

    for(ll &x : a) cin >> x;

    sort(bend(a));

    ll l = 0, r = n - 1;
    ll ans = 0;

    while(l < r){
        ll s = a[l] + a[r];

        if(s <= m){
            ans = max(ans, s);
            l++;
        }
        else r--;
    }

    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);

    solve();

    return 0;
}
