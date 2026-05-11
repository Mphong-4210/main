#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ms ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MaxN = 10005;

ll dp[MaxN];
pair<ll,ll> tracee[MaxN];

int main()
{
    ms

    freopen("Bai4.inp","r",stdin);
    freopen("Bai4.out","w",stdout);

    ll n;
    cin >> n;

    dp[0] = 0;

    for(ll i = 1; i <= n; i++)
    {
        dp[i] = 1;

        for(ll x = 1; x * x <= i; x++)
        {
            if(i % x) continue;

            ll y = i / x;

            if(x > y) continue;

            ll nxt = (x - 1) * (y + 1);

            ll val = dp[nxt] + 1;

            if(val > dp[i])
            {
                dp[i] = val;
                tracee[i] = {x, y};
            }
            else
            if(val == dp[i])
            {
                if(tracee[i].first == 0 || x < tracee[i].first)
                    tracee[i] = {x, y};
            }
        }
    }

    cout << dp[n] << '\n';

    while(n > 0)
    {
        ll x = tracee[n].first;
        ll y = tracee[n].second;

        cout << x << ' ' << y << '\n';

        n = (x - 1) * (y + 1);
    }
}
