#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n;

bool nt(int x){
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int tcs(ll x){
    int s = 0;
    while (x){
        int d = x % 10;
        s += d * d;
        x /= 10;
    }
    return s;
}

void solve(){
    cin >> n;
    ll cur = n + 1;
    while (true){
        if (nt(tcs(cur))){
            cout << cur;
            return;
        }
        cur++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);

    solve();
    return 0;
}
