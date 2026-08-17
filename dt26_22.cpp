#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin >> n;

    vector<ll> cnt(1000001, 0);
    ll ans = 0;

    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        cnt[x]++;
        ans = max(ans, cnt[x]);
    }

    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
