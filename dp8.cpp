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
ll gcdll( ll a, ll b ) {
    return b == 0 ? a : gcdll( b, a % b );
}
ll lcmll( ll a, ll b ) {
    return a / gcdll( a, b ) * b;
}
ll pw( ll a, ll b, ll mod = MOD ) {
    ll dem = 1;
    while ( b ) {
        if ( b & 1 )
            dem = ( dem * a ) % mod;
        a = ( a * a ) % mod;
        b >>= 1;
    }
    return dem;
}
void fileIO( const string &name ) {
    freopen( ( name + ".INP" ).c_str(), "r", stdin );
    freopen( ( name + ".OUT" ).c_str(), "w", stdout );
}
auto BS( const vector<long long> &a, int x, ll l, ll r ) {
    while ( l <= r ) {
        int m = ( l + r ) / 2;
        if ( a[m] == x ) {
            return m + 1;
        }
        else if ( a[m] < x ) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return -1;
}
vpll F;
void TV( ll n, ll v, vector<vector<ll>> &dp, vector<pair<ll, ll>> &F ) {
    vll G;
    while ( n > 0 ) {
        if ( dp[n][v] == dp[n - 1][v] )
            --n;
        else {
            G.push_back( n );
            v -= F[n].fi;
            --n;
        }
    }
    for ( int i = G.size() - 1; i >= 0; --i )
        cout << G[i] << " ";
}
void sol() {
    ll n, v;
    cin >> n >> v;
    F.resize( n + 1 );
    FOR( i, 1, n ) {
        cin >> F[i].fi >> F[i].se;
    }
    vll2D( dp, n + 1, v + 1 );
    for ( int i = 1; i <= n; ++i )
        for ( int j = 0; j <= v; ++j ) {
            dp[i][j] = dp[i - 1][j];
            if ( j >= F[i].fi ) {
                dp[i][j] = max( dp[i][j], dp[i - 1][j - F[i].fi] + F[i].se );
            }
        }
    cout << dp[n][v] << endl;
    TV( n, v, dp, F );
}
signed main() {
    faster();
    fileIO( "chondo" );
    ll T = 1;
    // cin >> T;
    while ( T-- )
        sol();
}
