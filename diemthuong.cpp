#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float

#define el "\n"
#define fi first
#define se second
#define pb push_back

const int maxn=1e6+42;
const int N=1e3;
ll a[maxn], y[N][N], dem[maxn];

void solve(){
    ll n;
    cin >> n;

    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }

    ll mx = a[1];
    cout << mx << ' ';

    for(ll i = 2; i <= n; i++){
        mx = max(mx, a[i]);
        cout << mx << ' ';
    }
}

int main(){
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
