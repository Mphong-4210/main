#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll dem(ll n) {
    ll cnt = 1;
    for(ll i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            ll exp = 0;
            while(n % i == 0) {
                n /= i;
                exp++;
            }
            cnt *= (exp+1);
        }
    }
    if(n > 1) cnt *= 2;
    return cnt;
}

int main() {
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    cout << dem(g);
}
