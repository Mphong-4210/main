#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
const int N=1e5;
int a[maxn], dem[maxn];

ll tcs(ll n){
    
}

void solve(){
    ll T;
    cin>>T;
    for(int i=1; i<=T; i++){
        cin>>a[i];
        int dem=0, tong=1;
        for(int j=1; j<=a[i]; j++){
            cin>>b[i];
        }
        for(int j=2; j<=a[i]; j++){
            if(b[i]>=dem){
                dem=b[i];
                tong+=1;
            }
        }
        cout<<tong<<el;
    }
}


int main(){
    freopen("CANBANG.INP", "r", stdin);
    freopen("CANBANG.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
