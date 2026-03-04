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
int a[maxn], y[N][N], dem[10];


void solve(){
    ll n, tong=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
                tong+=1;
        }
    }
    cout<<tong;


}
int main(){
       //freopen(".INP", "r", stdin);
       //freopen(".OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
        solve();
}
