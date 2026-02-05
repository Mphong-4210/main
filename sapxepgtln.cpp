
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

const int maxn=10e6+42;
const int N=1e3;
int a[maxn], y[N][N], dem[maxn];


void solve(){
    ll n, k, res=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=(n-k-1); i++){
        res-=a[i];
    }
    for(int i=n-k; i<=n; i++){
        res+=a[i];
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