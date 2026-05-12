#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ms ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MaxN = 5000000;

bool prime[MaxN + 5];
vector<ll> p;

int main()
{
    ms



    fill(prime, prime + MaxN + 1, true);

    prime[0] = prime[1] = false;

    for(ll i = 2; i * i <= MaxN; i++)
    {
        if(prime[i])
        {
            for(ll j = i * i; j <= MaxN; j += i)
                prime[j] = false;
        }
    }

    for(ll i = 2; i <= MaxN; i++)
    {
        if(prime[i]) p.push_back(i);
    }

    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll ans = -1;

        for(ll i = 0; i + 2 < p.size(); i++)
        {
            __int128 val = (__int128)p[i] * p[i + 1] * p[i + 2];

            if(val <= n)
                ans = (ll)val;
            else break;
        }

        cout << ans << '\n';
    }
}
