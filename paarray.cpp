#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(x) x.begin(), x.end()

const ll INF = 1e18;

void solve(){
    ll n; cin >> n;
    vll a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll S = 0;
    for(int i = 0; i < n; i++) S += a[i];

    int b[25] = {};
    ll ans = INF;

    while(true){
        ll sum1 = 0;

        for(int i = 0; i < n; i++){
            if(b[i] == 1) sum1 += a[i];
        }

        ll sum2 = S - sum1;
        ans = min(ans, abs(sum1 - sum2));
        int pos = -1;
        for(int i = n - 1; i >= 0; i--){
            if(b[i] == 0){
                pos = i;
                break;
            }
        }

        if(pos == -1) break;

        b[pos] = 1;
        for(int i = pos + 1; i < n; i++){
            b[i] = 0;
        }
    }

    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}