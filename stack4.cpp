#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

typedef long long ll;

const int N = 5e5 + 5;
ll n, m;
ll h[N], L[N], R[N];

ll solve_hist(ll a[]){
    stack<ll> st;

    for(int i = 1; i <= n; i++){
        while(!st.empty() && a[st.top()] >= a[i]) st.pop();
        if(st.empty()) L[i] = 0;
        else L[i] = st.top();
        st.push(i);
    }

    while(!st.empty()) st.pop();

    for(int i = n; i >= 1; i--){
        while(!st.empty() && a[st.top()] >= a[i]) st.pop();
        if(st.empty()) R[i] = n + 1;
        else R[i] = st.top();
        st.push(i);
    }

    ll res = 0;
    for(int i = 1; i <= n; i++){
        res = max(res, a[i] * (R[i] - L[i] - 1));
    }
    return res;
}

void solve(){
    cin >> m >> n;
    for(int i = 1; i <= n; i++) cin >> h[i];

    ll ans = solve_hist(h);

    static ll b[N];
    for(int i = 1; i <= n; i++) b[i] = m - h[i];

    ans = max(ans, solve_hist(b));

    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
