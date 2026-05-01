#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll L; int n;
    cin >> L >> n;

    priority_queue<ll, vector<ll>, greater<ll>> pq;

    ll sum = 0;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        pq.push(x);
        sum += x;
    }

    if(sum < L) pq.push(L - sum);

    ll res = 0;

    while(pq.size() > 1){
        ll x = pq.top(); pq.pop();
        ll y = pq.top(); pq.pop();
        res += x + y;
        pq.push(x + y);
    }

    cout << res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
