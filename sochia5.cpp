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
    ll n, res=0;
    ll du0=0, du1=0, du2=0, du3=0, du4=0;
    cin>>n;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        ll r=a[i]%5;
        if(r==0){
            du0+=1;
        }
        else if(r==1){
            du1+=1;
        }
        else if(r==2){
            du2+=1;
        }
        else if(r==3){
            du3+=1;
        }
        else{
            du4+=1;
        }
    }
    ll x=min(du1, du4);
    ll y=min(du3, du2);
    res+=x+y+du0;
    du1-=x;
    du4-=x;
    du2-=y;
    du3-=y;
    cout<<res+du1/5+du2/5+du3/5+du4/5<<el;
}
int main(){
       //freopen(".INP", "r", stdin);
       //freopen(".OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       ll q;
       cin>>q;
       while(q--){
        solve();
       }
}