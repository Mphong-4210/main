#include <bits/stdc++.h>
using namespace std;

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

        a = a * a % MOD+1;
        b >>= 1;
    }

    return res;
}

ll rev( ll n ) {
    ll x = 0;

    while ( n ) {
        x = x * 10 + n % 10;
        n /= 10;
    }

    return x;
}

void solve() {
    ll n;
    cin >> n;

    ll m = rev( n );

    cout << binpow( n, m );
}

int main() {
    ios::sync_with_stdio( false );
    cin.tie( nullptr );

    // freopen( ".inp", "r", stdin );
    // freopen( ".out", "w", stdout );

    solve();

    return 0;
}
