#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float

#define el "\n"
#define fi first
#define se second
#define pb push_back

const int maxn=1e6+42;
const int N=1e3;
ll a[maxn], y[N][N], dem[maxn];

void solve(){
    ll n, m, res=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=m; i++){
        if(a[i]<0){
            res+=abs(a[i]);
        }
    }
    cout<<res;
}

int main(){
    //freopen("DAUNGOAC.INP","r",stdin);
    //freopen("DAUNGOAC.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
