
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
ll a[maxn], b[maxn], y[N][N], dem[maxn];

void solve(){
    ll n, res=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i]>>b[i];
    }
    while(true){
        char c;
        cin>>c;
        if(c=='R'){
            for(int i=1; i<=n; i++){
                a[i]++;
            }
            sort(a+1, a+1+n);
            if(a[n-1]==a[n]){
                res++;
            }
            for(int i=1; i<n; i++){
                if(a[i]==a[i+1]){
                    res++;
                }
            }
        }
        else{
            for(int i=1; i<=n; i++){
                a[i]--;
            }
            sort(a+1, a+1+n);
            if(a[n-1]==a[n]){
                res++;
            }
            for(int i=1; i<n; i++){
                if(a[i]==a[i+1]){
                    res++;
                }
            }
        }
    }
    cout<<res*3;
}

int main(){
    //freopen("DAUNGOAC.INP","r",stdin);
    //freopen("DAUNGOAC.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}