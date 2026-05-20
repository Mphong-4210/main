#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")
 
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
    int n, h; cin >> n >> h;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(x > h) ans += 2;
        else ans += 1;
    }
    cout << ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
}
