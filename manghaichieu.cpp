#include<bits/stdc++.h>
    using namespace std;

    #define ll long long
    #define fl float
    #define el "\n"
    #define ull unsigned long long

    const int maxn=1e4;
    int y[maxn], a[maxn][maxn], x[maxn];


    void solve(){
        ll m, n, tong=0;
        cin>>m>>n;
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                cin>>a[i][j];
                if(i==1 || i==m||j==1||j==n){
                    tong+=a[i][j];
                }
            }
        }
        cout<<tong-a[1][1]-a[1][n]-a[n][n]-a[n][1];
    }


    int main(){
        //freopen(".INP", "r", stdin);
        //freopen(".OUT", "w", stdout);
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        solve();
    }
