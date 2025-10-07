#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll MOD = 998244353;

void solve(){
    ll a, b;
    cin >> a >> b;
    ll dem = 0;
    while(a > 0 && b > 0){
        if(a >= b){
            dem = (dem + a) % MOD;
            a -= b;
        } else {
            dem = (dem + b) % MOD;
            b -= a;
        }
    }
    cout << dem % MOD;
}

int main(){
    solve();
}