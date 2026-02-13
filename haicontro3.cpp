
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
    ll n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    b[1]=a[1];
    for(int i=2; i<=n; i++){
        b[i]=b[i-1]+a[i];
    }
    for(int i=1; i<=n; i++){
        if(b[i]==b[n]-b[i]){
            cout<<i;
            return;
        }
    }
    cout<<0;
}

int main(){
    //freopen("chiamang.inp","r",stdin);
    //freopen("chiamang.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}