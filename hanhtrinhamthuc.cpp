#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int na=10e4;
int a[na];

void solve(){
    ll n, k, dem=3;
    cin>>n>>k;
    for (int i=1; i<=n; ++i){
        cin>>a[i];
    }

    for (int i=1; i<=n-k+1; ++i){
        ll tong=0;
        for(int j=0; j<k; ++j){
            tong+=a[i+j];
        }
        if(tong>=dem){
            dem=tong;
        }
    }
    cout<<dem;
}
int main(){
    solve();
}