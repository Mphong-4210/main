#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define fori(n) for (int i = 0; i < (n); i++)
#define int ll

void fre(const char *name)
{
    string s = name;
    if (ifstream(s + ".INP").good())
    {
        freopen((s + ".INP").c_str(), "r", stdin);
        freopen((s + ".OUT").c_str(), "w", stdout);
    }
}

signed main()
{
    fast;
    fre("demdoan");
    ll n;
    cin >> n;
    while (n % 2 == 0)
    {
        n /= 2;
    }

    ll cnt = 1;

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            ll mu = 0;
            while (n % i == 0)
            {
                mu++;
                n /= i;
            }
            cnt *= (mu + 1);
        }
    }
                                                                                                                      
    if (n > 1)
        cnt *= 2;

    cout << cnt << "\n";

    return 0;
}
