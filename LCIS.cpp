#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float

#define vll vector<ll>
#define pll pair<ll,ll>

const int MAXN = 5005;

ll n,m;
ll a[MAXN], b[MAXN];
ll dp[MAXN];

void solve(){
    cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=m;i++) cin >> b[i];

    for(int i=1;i<=n;i++){
        ll best=0;
        for(int j=1;j<=m;j++){
            if(a[i]==b[j]) dp[j]=max(dp[j],best+1);
            if(b[j]<a[i]) best=max(best,dp[j]);
        }
    }

    ll ans=0;
    for(int j=1;j<=m;j++) ans=max(ans,dp[j]);
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    solve();
}
