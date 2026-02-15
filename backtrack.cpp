
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
ll a[maxn], y[N][N], dem[maxn];
vector<int> v;

void in_kq(){
    for(int x:v) cout<<x;
    cout<<el;
}

void backtrack(int pos, ll k, ll n){
    if(pos==k){
        in_kq();
        return;
    }
    for(int i=1; i<=n; i++){
        v.push_back(i);
        backtrack(pos+1, k, n);
        v.pop_back();
    }
}
void solve(){
    ll n, k;
    cin>>n>>k;
    backtrack(0, k, n);
}

int main(){
    //freopen("DAUNGOAC.INP","r",stdin);
    //freopen("DAUNGOAC.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}