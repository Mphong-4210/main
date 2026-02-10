
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
const int NN=2*(1e5+1);
ll a[maxn], b[maxn], c[maxn];

void solve(){
    ll n, m, res=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        if(b[a[i]]==0){
            m--;
            b[a[i]]++;
        }
        if(m==0){
            cout<<i*10;
        }
    }
}

int main(){
    freopen("trongcay.inp","r",stdin);
    freopen("trongcay.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
