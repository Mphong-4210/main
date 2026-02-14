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
int a[maxn], y[N][N], dem[maxn];

bool binsearch(int a[maxn], ll x, ll n){
    ll l = 1, r = n;
        while(l<=r){
            ll mid=(l+r)/2;
            if(a[mid]==x){
                return true;
            }
            else if(a[mid]<x){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
    return false;
}

void solve(){
    ll n, q;
    cin>>n>>q;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    } 
    sort(a+1, a+1+n);

        if(binsearch(a, q, n)){
            cout<<"YES"<<el;
        }
        else{
            cout<<"NO"<<el;
        }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
