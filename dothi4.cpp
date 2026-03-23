#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn=1e3+5;
ll a[maxn][maxn];

int main(){
    ll n, m;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        ll x, y;
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
