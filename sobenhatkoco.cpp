#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long
#define fi first
#define se second

const int maxn=10e6+42;
const int N=1e3;
int a[maxn];

void solve(){
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    if(a[1]>1){
    
        cout<<1;
    }
    else{
        for(int i=1; i<n; i++){
            if(a[i]+1!=a[i+1]&&a[i]!=a[i+1]){
                cout<<a[i]+1;
                return;
            }
        }
        cout<<a[n]+1;
    }
}

int main(){
       freopen("CAU3.INP", "r", stdin);
       freopen("CAU3.OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}
