#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ms ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MaxN = 1e7 + 5;

bool prime[MaxN];

int main()
{
    ms
    ll n;
    cin >> n;

    fill(prime, prime + n + 1, true);

    prime[0] = prime[1] = false;

    for(ll i = 2; i * i <= n; i++)
    {
        if(prime[i])
        {
            for(ll j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }

    vector<ll> p;

    for(ll i = 2; i <= n; i++)
    {
        if(prime[i]) p.push_back(i);
    }

    ll ans = 0;

    for(ll i = 0; i < p.size(); i++)
    {
        if(1LL * p[i] * p[i] * p[i] <= n)
            ans++;
        else break;
    }

    for(ll i = 0; i < p.size(); i++)
    {
        for(ll j = i + 1; j < p.size(); j++)
        {
            if(1LL * p[i] * p[j] <= n)
                ans++;
            else break;
        }
    }

    cout << ans;
}
