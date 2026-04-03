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
    ll ax,ay,bx,by,cx,cy,dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;

    ll x1 = min(ax, bx), x2 = max(ax, bx);
    ll y1 = min(ay, by), y2 = max(ay, by);

    ll x3 = min(cx, dx), x4 = max(cx, dx);
    ll y3 = min(cy, dy), y4 = max(cy, dy);

    ll w = max(0LL, min(x2, x4) - max(x1, x3));
    ll h = max(0LL, min(y2, y4) - max(y1, y3));

    cout << w * h;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}