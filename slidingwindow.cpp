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
ll a[maxn], y[N][N], dem[maxn], b[maxn];

void solve(){
    ll n, k;
    ll len=100000, pos=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    b[1]=a[1];
    for(int i=2; i<=n; i++){
        b[i]=b[i-1]+a[i];
    }
    ll l=1, r=1;
    while(l<=n && r<=n){
        ll x=b[r]-b[l-1];
        if(x<k){
            r++;            
        }
        else if(x>k){
            l++;
        }
        else{
            ll lenht=r-l+1;
            if(lenht<len){
                len=lenht;
                pos=l;
            }
            l++;
        }
    }
    if(len==100000){
        cout<<0;
    }
    else{
        cout<<pos<<' '<<len;
    }
}

int main(){
    freopen("tdoan.inp","r",stdin);
    freopen("tdoan.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
