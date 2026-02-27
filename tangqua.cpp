#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int maxn = 1e6 + 42;

void solve(){
    int n;
    cin >> n;

    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    ll ans = 0;
    for(int x : s){
        if(x > 0 && s.count(-x)){
            ans++;
        }
    }

    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);

    solve();
    return 0;
}
