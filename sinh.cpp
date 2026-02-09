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
ll y[N][N];


void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=1; i<n; i++){
        a[i]=i+1;
    }
    do{
        bool check=true;
        for(int i=1; i<n; i++){
            if(abs(a[i]-a[i-1])==1){
                check=false;
                break;
            }
        }
        if(check){
            for(int x:a){cout<<x;}
            cout<<el;
        }
    }while(next_permutation(a.begin(), a.end()));
}

int main(){
    //freopen("DAUNGOAC.INP","r",stdin);
    //freopen("DAUNGOAC.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
