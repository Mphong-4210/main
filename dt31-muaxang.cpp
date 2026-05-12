#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ms ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MaxN = 1e5 + 5;

ll n;
ll a[MaxN], p[MaxN];

int main()
{
    ms


    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++)
        cin >> p[i];

    ll mn = 1e18;
    ll ans = 0;

    for(int i = 1; i <= n; i++)
    {
        mn = min(mn, p[i]);
        ans += mn * a[i];
    }

    cout << ans;
}
