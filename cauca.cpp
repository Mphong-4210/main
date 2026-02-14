#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float

#define el "\n"
#define fi first
#define se second
#define pb push_back

const int maxn=105, maxm=1e5+5;
ll dp[maxn][maxm], w[maxn], v[maxn];

void solve(){
    ll n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>w[i]>>v[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            dp[i][j]=dp[i-1][j];
            if(j >= w[i]){
                dp[i][j] = max(dp[i][j], dp[i-1][j - w[i]] + v[i]);
            }
        }
    }
    cout << dp[n][m];
}

int main(){
    //freopen("daycont.inp","r",stdin);
    //freopen("daycont.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
