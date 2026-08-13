#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> a(n);
    ll sum=0;

    for(ll &x:a){
        cin>>x;
        sum+=x;
    }

    ll mn=1e18,pos=-1,prefix=0;

    for(ll i=0;i<n;i++){
        ll x=a[i],cnt=0;

        while(x%k==0){
            x/=k;
            cnt++;
        }

        if(cnt<mn){
            mn=cnt;
            pos=i;
        }
    }

    for(ll i=0;i<pos;i++)
        prefix+=a[i];

    cout<<(mn+1)*sum+prefix;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
