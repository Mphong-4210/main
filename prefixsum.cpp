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
ll a[maxn], y[N][N], s[maxn];

void solve(){
    ll n, q, x, res=0;
    cin>>n>>x>>q;
    cin>>a[1];
    s[0]=0;
    s[1]=a[1];
    for(int i=2; i<=n; i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }   
    while(q--){
        ll l, r;
        cin>>l>>r;
        if(s[r]-s[l-1]<x){
            res++;
        }
    }
    cout<<res;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}