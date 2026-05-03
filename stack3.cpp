#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

typedef long long ll;

const int N = 1e5 + 5;
int n;
ll h[N], kq[N];

void solve(){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> h[i];

    stack<int> st;

    for(int i = 1; i <= n; i++){
        while(!st.empty() && h[st.top()] <= h[i]) st.pop();

        if(st.empty()) kq[i] = 0;
        else kq[i] = st.top();

        st.push(i);
    }

    for(int i = 1; i <= n; i++) cout << kq[i] << " ";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
