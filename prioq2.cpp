#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>

void solve(){
    int n; cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll sum = 0;

    for(int i = 1; i <= n; i++){
        ll x; cin >> x;

        if(!pq.empty()){
            ll t = pq.top(); pq.pop();
            sum += t;
            pq.push(t * 2);
        }

        pq.push(x);
        sum += x;
    }

    cout << sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
