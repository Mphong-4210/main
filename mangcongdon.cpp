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
int a[maxn], y[N][N], dem1[maxn], dem2[maxn];

void solve(){
    ll n, q, tong=0, tong1=0;
    
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>a[i];
        tong+=a[i];
        dem1[i]=tong;
    }
    sort(a+1, a+1+n);
    
    for(int i=1; i<=n; i++){
        tong1+=a[i];
        dem2[i]=tong1;
    }
    cin>>q;
    while(q--){
        ll l, r, t;
        cin>>t>>l>>r;
        if(t==1){
            cout<<dem1[r]-dem1[l-1]<<el;
        }
        else{
            cout<<dem2[r]-dem2[l-1]<<el;
        }
    }
     

}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}