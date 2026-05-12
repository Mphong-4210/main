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
vll st( 4 * 1e5 + 9 );
vll F( 1e5 + 1 );
signed main() {
    ll n;
    cin >> n;
    set<ll> G;
    queue<ll> st;
    st.push( n );
    vector<bool> visited( n + 1, 0 );
    visited[n] = true;
    while ( !st.empty() ) {
        ll a = st.front();
        st.pop();
        for ( int i = 1; i <= sqrt( a ); i++ ) {
            if ( a % i == 0 ) {
                ll b = ( i - 1 ) * ( a / i + 1 );
                if ( !visited[b] ) {
                    G.insert( b );
                    st.push( b );
                    visited[b] = true;
                }
            }
        }
    }
    cout << G.size() << endl;
    for ( auto x : G )
        cout << x << " ";
}
