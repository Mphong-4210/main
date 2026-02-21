#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
const int N=1e3;
int y[maxn], a[N][N], x[maxn], dem[maxn], l[maxn], r[maxn];


void solve(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>y[i];
        dem[y[i]]++;
    }

    for(int i=1; i<=1000000; i++){
        if(dem[i]==1){
            cout<<i;
        }
    }
}

int main(){
    //freopen("TONGCHUSO.INP", "r", stdin);
    //freopen("TONGCHUSO.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
