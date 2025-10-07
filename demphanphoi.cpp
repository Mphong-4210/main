#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
const int N=1e3;
double a[maxn], dem[maxn];


void solve(){
    int n, k;
    cin>>n;
    cin>>k;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    cout<<a[n-k+1];
}


int main(){
    //freopen("TONGCHUSO.INP", "r", stdin);
    //freopen("TONGCHUSO.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
