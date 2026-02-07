
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
ll a[3][3];
void solve(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cin>>a[i][j];
        }
    }
    ll s=a[1][1]+a[1][2]+a[1][3];
    for(int i=2; i<=3; i++){
        ll r=a[i][1]+a[i][2]+a[i][3];
        if(r!=s){
            cout<<"NO";
            return;
        }
    }
    for(int i=2; i<=3; i++){
        ll r=a[1][i]+a[2][i]+a[3][i];
        if(r!=s){
            cout<<"NO";
            return;
        }
    }
    bool p=false;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            if(a[i][j]!=a[0][0]){
                p=true;
            }
        }
    }
    if(p){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main(){
    //freopen("DAUNGOAC.INP","r",stdin);
    //freopen("DAUNGOAC.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
