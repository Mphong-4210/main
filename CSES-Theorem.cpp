#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
int a[maxn];

ll tud(ll a){
    ll dem=0;
    for(int i=1; i<=a; i++){
        if(a%i==0){
            dem+=i;
        }
    }
    return dem;
}
void solve(){
    ll n, dem=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]*2<=tud(a[i])){
            dem+=1;
        }
    }
    cout<<dem;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}