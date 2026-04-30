#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m; cin >> n >> m;
    priority_queue<ll> pq;

    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(x > 0) pq.push(x);
    }

    ll res = 0;

    while(m--){
        if(pq.empty()) break;
        ll x = pq.top(); pq.pop();
        res += x;
        if(x - 1 > 0) pq.push(x - 1);
    }

    cout << res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
