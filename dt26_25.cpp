#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string n;
    cin >> n;

    ll ans = 0;

    for(char c : n)
        ans += c - '0';

    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
