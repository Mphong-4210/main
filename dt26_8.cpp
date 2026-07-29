#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define all( x ) ( x ).begin(), ( x ).end()
#define REP( i, n ) for ( int i = 0; i < ( n ); i++ )
#define FOR( i, a, b ) for ( int i = ( a ); i <= ( b ); i++ )
#define pll pair<ll, ll>
#define vll vector<ll>
#define vll2D( F, x, y ) vector<vll> F( x, vll( y, 0 ) )
signed main() {
    ios::sync_with_stdio( false );
    cin.tie( nullptr );
    ll t;
    cin >> t;
    while ( t-- ) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> pos( 2001 );
        vll F( n );
        REP( i, n )
        cin >> F[i];
        for ( int i = n - 1; i >= 0; i-- ) {
            if ( F[i] <= 2000 )
                pos[F[i]].push_back( i );
        }
        vll B( m );
        REP( i, m )
        cin >> B[i];
        vll dp;
        REP( j, m ) {
            ll val = B[j];
            if ( val > 2000 )
                continue;
            for ( auto idx : pos[val] ) {
                auto it = lower_bound( all( dp ), idx );
                if ( it == dp.end() ) {
                    dp.push_back( idx );
                }
                else {
                    *it = idx;
                }
            }
        }
        cout << dp.size() << '\n';
    }
}
