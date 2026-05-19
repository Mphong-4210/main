#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float
#define str string

void solve() {
    ll n, m, a; cin >> n >> m >> a;
    ll x = (n + a - 1) / a;
    ll y = (m + a - 1) / a;
    cout << x * y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    solve();
}
