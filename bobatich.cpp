
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
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    ll x=a[1]*a[i]*a[n];
    ll y=a[n-2]*a[n-1]*a[n];
    if(x>y){
        cout<<x;
    }
    else{
        cout<<y;
    }
}

int main(){
   freopen("DEMCAPSO.INP", "r", stdin);
   freopen("DEMCAPSO.OUT", "w", stdout);
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   solve();
}
