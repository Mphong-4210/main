#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef float fl;
typedef long double ldb;
typedef unsigned long long ull;
typedef string str;

#define vll vector<ll>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define dq deque<ll>
#define ret return
#define si size()
#define el '\n'
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define bend(x) (x).begin(), (x).end()

void solve() {
    str a, b;
    cin >> a >> b;

    if (a == "0" || b == "0") {
        cout << 0;
        ret;
    }

    vll c(a.si + b.si, 0);

    for (ll i = a.si - 1; i >= 0; i--) {
        for (ll j = b.si - 1; j >= 0; j--) {
            ll x = a[i] - '0';
            ll y = b[j] - '0';

            c[i + j + 1] += x * y;
        }
    }

    for (ll i = c.si - 1; i > 0; i--) {
        c[i - 1] += c[i] / 10;
        c[i] %= 10;
    }

    ll pos = 0;

    while (pos < c.si - 1 && c[pos] == 0)
        pos++;

    for (ll i = pos; i < c.si; i++)
        cout << c[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    ret 0;
}
