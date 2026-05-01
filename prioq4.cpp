#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll,ll>

void solve(){
    int n, m; cin >> n >> m;

    vector<pll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    vector<ll> c(m);
    for(int i = 0; i < m; i++) cin >> c[i];

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    priority_queue<ll> pq;
    ll res = 0;
    int j = 0;

    for(int i = 0; i < m; i++){
        while(j < n && a[j].first <= c[i]){
            pq.push(a[j].second);
            j++;
        }
        if(!pq.empty()){
            res += pq.top();
            pq.pop();
        }
    }

    cout << res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
