#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'

const int MAXN = 5005;
ll a[MAXN];

void manhphong(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    ll n;
    cin >> n;

    for(int i=1;i<=n;i++) cin >> a[i];

    sort(a+1,a+n+1);

    for(int j=2;j<n;j++){
        int i=j-1,k=j+1;

        while(i>=1 && k<=n){
            ll s=a[i]+a[k];
            ll t=2*a[j];

            if(s==t){
                cout<<a[i]<<" "<<a[j]<<" "<<a[k];
                return;
            }
            if(s<t) k++;
            else i--;
        }
    }

    cout<<0;
}

int main(){
    manhphong();
    solve();
}
