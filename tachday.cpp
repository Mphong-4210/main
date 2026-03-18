#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz size()
#define all( x ) ( x ).begin(), ( x ).end()
#define rall( x ) ( x ).rbegin(), ( x ).rend()
#define faster()                   \
    ios::sync_with_stdio( false ); \
    cin.tie( nullptr );
#define FOR( i, a, b ) for ( int i = ( a ); i <= ( b ); i++ )
#define FORD( i, a, b ) for ( int i = ( a ); i >= ( b ); i-- )
#define REP( i, n ) for ( int i = 0; i < ( n ); i++ )
#define REPD( i, n ) for ( int i = n - 1; i >= 0; i-- )
#define EACH( x, a ) for ( auto &x : a )
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define mll map<ll, ll>
#define umll unordered_map<ll, ll>
#define sll set<ll>
#define msll multiset<ll>
#define usll unordered_set<ll>
#define ins insert
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll2D( F, x, y ) vector<vll> F( x, vll( y, 0 ) )
#define debug( x ) cout << #x << " = " << x << endl
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
void sol() {
    ll n;
    cin >> n;
    multiset<long long> s;
    for ( int i = 0; i < n; i++ ) {
        long long x;
        cin >> x;

        auto it = s.upper_bound( x );

        if ( it == s.begin() ) {
            s.insert( x );
        }
        else {
            --it;
            s.erase( it );
            s.insert( x );
        }
    }

    cout << s.size();
}
signed main() {
    faster();
    // fileIO( "LLGC2M" );
    ll T = 1;
    // cin >> T;
    while ( T-- )
        sol();
}
