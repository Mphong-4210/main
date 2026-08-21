#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll m,n;
    cin >> m >> n;

    vector<vector<ll>> a(m, vector<ll>(n));

    for(ll i=0;i<m;i++){
        if(i%2==0){
            for(ll j=0;j<n;j++)
                cin >> a[i][j];
        }
        else{
            for(ll j=n-1;j>=0;j--)
                cin >> a[i][j];
        }
    }

    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
