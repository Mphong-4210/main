#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long
#define fi first
#define se second

const int maxn=10e6+42;
const int N=1e3;
int a[maxn];

void solve(){
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    ll k=a[1]*a[2];
    ll l=a[n]*a[n-1];
    if(k>l){
        cout<<k;
    }
    else{
        cout<<l;
    }
}

int main(){
       freopen("CAU3.INP", "r", stdin);
       freopen("CAU3.OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}
