
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
int y[maxn], a[N][N], x[maxn];


void solve(){
    ll m, n;
    cin>>m>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    int res=0;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j]>res){
                res=a[i][j];
            }
        }
    }
    cout<<res<<el;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(res==a[i][j]){
                cout<<m<<' '<<n<<el;
            }
        }
    }
}

int main(){
       freopen("timmax.INP", "r", stdin);
       freopen("timmax.OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}
