#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float
#define str string
#define ldb long double
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define dq deque<ll>
#define bend(x) (x).begin(), (x).end()
#define ret return

void solve(){
    ll n;
    cin >> n;

    ll a = 1, b = n;

    for(ll i = 2; i * i <= n; i++){
        ll cnt = 0;

        while(n % i == 0){
            n /= i;
            cnt++;
        }

        if(cnt >= 2){
            a *= (ll)pow(i, cnt / 2);
            if(cnt % 2) b /= (ll)pow(i, cnt - 1);
            else b /= (ll)pow(i, cnt);
        }
    }

    cout << a << ' ' << b << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);

    ll t;
    cin >> t;

    while(t--) solve();

    return 0;
}
