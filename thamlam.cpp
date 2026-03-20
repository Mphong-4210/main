#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define el '\n'

const ll INF = -1e18;

void solve(){
    ll n,k; cin>>n>>k;
    vll a(n+1), pre(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        pre[i]=pre[i-1]+a[i];
    }

    vll dp(n+1, INF), ndp(n+1, INF);
    dp[0]=0;

    for(ll j=1;j<=k;j++){
        ll best = -1e18;
        for(ll i=1;i<=n;i++){
            best = max(best, dp[i-1] - j*pre[i-1]);
            ndp[i] = j*pre[i] + best;
        }
        dp = ndp;
    }

    cout<<dp[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
