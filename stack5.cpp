#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

typedef long long ll;

const int N = 1005;
int m, n;
ll h[N], L[N], R[N];

ll solve_hist(){
    stack<int> st;

    for(int i = 1; i <= n; i++){
        while(!st.empty() && h[st.top()] >= h[i]) st.pop();
        if(st.empty()) L[i] = 0;
        else L[i] = st.top();
        st.push(i);
    }

    while(!st.empty()) st.pop();

    for(int i = n; i >= 1; i--){
        while(!st.empty() && h[st.top()] >= h[i]) st.pop();
        if(st.empty()) R[i] = n + 1;
        else R[i] = st.top();
        st.push(i);
    }

    ll res = 0;
    for(int i = 1; i <= n; i++){
        res = max(res, h[i] * (R[i] - L[i] - 1));
    }
    return res;
}

void solve(){
    cin >> m >> n;

    ll ans = 0;

    for(int i = 1; i <= m; i++){
        string s; cin >> s;
        for(int j = 1; j <= n; j++){
            if(s[j-1] == 'W') h[j]++;
            else h[j] = 0;
        }
        ans = max(ans, solve_hist());
    }

    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
