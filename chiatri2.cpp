#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define ll long long
#define fi first
#define se second
#define all( x ) ( x ).begin(), ( x ).end()
#define REP( i, n ) for ( int i = 0; i < ( n ); i++ )
#define FOR( i, a, b ) for ( int i = ( a ); i <= ( b ); i++ )

typedef pair<ll, ll> pll;
typedef vector<ll> vll;

const ll MOD = 1e9 + 7;

ll binpow( ll a, ll b ) {
    ll res = 1;
    a %= MOD;

    while ( b ) {
        if ( b & 1 ) {
            res = res * a % MOD;
        }

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

void solve() {
    ll n;
    cin >> n;

    cout << binpow( 2, n - 1 );
}

int main() {
    ios::sync_with_stdio( false );
    cin.tie( nullptr );

    // freopen( ".inp", "r", stdin );
    // freopen( ".out", "w", stdout );

    solve();

    return 0;
}
