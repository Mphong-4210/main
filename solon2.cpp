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

    bool am = false;

    if (a.si < b.si || (a.si == b.si && a < b)) {
        swap(a, b);
        am = true;
    }

    str res = "";
    ll borrow = 0;

    ll i = a.si - 1;
    ll j = b.si - 1;

    while (i >= 0) {
        ll x = a[i] - '0' - borrow;
        ll y = (j >= 0 ? b[j] - '0' : 0);

        if (x < y) {
            x += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        res += char(x - y + '0');

        i--;
        j--;
    }

    while (res.si > 1 && res.back() == '0')
        res.pop_back();

    reverse(bend(res));

    if (am && res != "0")
        cout << '-';

    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    ret 0;
}
