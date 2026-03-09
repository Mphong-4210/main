#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vect vector
#define bend(v) v.begin(),v.end()
#define db double
#define pb push_back

const int N=1000005;

ll a[N],pre[N],suf[N],sum[N];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n,k;
    cin>>n>>k;

    for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=n;i++)
        a[i]+=a[i-1];

    int m=n-k+1;

    for(int i=1;i<=m;i++)
        sum[i]=a[i+k-1]-a[i-1];

    for(int i=1;i<=m;i++)
        pre[i]=max(pre[i-1],sum[i]);

    for(int i=m;i>=1;i--)
        suf[i]=max(suf[i+1],sum[i]);

    ll ans=LLONG_MAX;

    for(int i=1;i<=m;i++){
        ll tam=0;

        if(i-k>=1) tam=max(tam,pre[i-k]);
        if(i+k<=m) tam=max(tam,suf[i+k]);

        ans=min(ans,tam);
    }

    cout<<ans;
}
