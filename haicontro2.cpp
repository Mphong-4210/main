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
    ll n, x, res=0;
    cin>>n>>x;
    for(ll i=1; i<=n; i++){
       cin>>a[i];
    }
    ll l=1, r=1, sum=a[1];
    while(r<=n){
       if(sum<x){
              r++;
              sum+=a[r];
       }
       else if(sum>x){
              l++;
              sum-=a[l-1];
       }
       else{
              res++;
              l++;
              sum+=a[r];
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