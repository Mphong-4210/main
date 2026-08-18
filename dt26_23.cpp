#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s;
    cin >> s;

    ll cnt[3] = {1, 0, 0};
    ll sum = 0, ans = 0;

    for(char c : s){
        sum = (sum + (c - '0')) % 3;
        ans += cnt[(sum - sum + 3) % 3];
        cnt[sum]++;
    }

    ll total = 0;
    for(char c : s)
        total = (total + (c - '0')) % 3;

    ans = 0;
    cnt[0] = 1;
    cnt[1] = cnt[2] = 0;

    ll cur = 0;
    for(char c : s){
        cur = (cur + c - '0') % 3;
        ans += cnt[(cur - total + 3) % 3];
        cnt[cur]++;
    }

    ans--;

    if(total == 0)
        ans++;

    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
