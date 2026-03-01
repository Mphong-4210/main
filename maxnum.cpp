#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"

void solve(){
    int n;
    cin >> n;

    map<ll, ll> cnt;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        cnt[x]++;
    }

    ll val = 0, mx = 0;
    for(auto it : cnt){
        if(it.second > mx){
            mx = it.second;
            val = it.first;
        }
    }

    cout << val << " " << mx;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);

    solve();
    return 0;
}
