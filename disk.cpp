#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll INF = 1e18;

ll n,m;
ll cost[35];
ull maska[35];

void solve(){
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
        int k;
        cin>>cost[i]>>k;
        ull mask=0;
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            mask|=(1ULL<<(x-1));
        }
        maska[i]=mask;
    }

    ll ans=INF;
    ll best=0;

    for(ll s=0;s<(1LL<<n);s++){
        ull cur=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            if(s>>i&1){
                cur|=maska[i+1];
                sum+=cost[i+1];
            }
        }
        if(__builtin_popcountll(cur)>=m){
            if(sum<ans){
                ans=sum;
                best=s;
            }
        }
    }

    cout<<ans<<"\n";
    for(int i=0;i<n;i++)
        if(best>>i&1) cout<<i+1<<" ";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("disk.inp","r",stdin);
    freopen("disk.out","w",stdout);

    solve();
}
