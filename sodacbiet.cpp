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
    fre("sodacbiet");

    string a, b;
    int k;
    cin >> a >> b >> k;
    string s = "0";
    while (1)
    {
        string p = a + s + b;
        ll t = stoll(p);
        if (t % (k - 10) == 0)
        {
            cout << (t / (k - 10));
            return 0;
        }
        else
            s += '0';
    }

    return 0;
}
