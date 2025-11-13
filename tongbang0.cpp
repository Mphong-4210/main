#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
const int N=1e3;
pair<ll ,ll> y[maxn], a[maxn], x[maxn], b[maxn];


void solve(){
   int n, tong=0;
   cin>>n;
   for(int i=1; i<=n; i++){
      cin>>a[i].fi;
      a[i].se=i;
   }
   sort(a+1, a+n+1);
   for(int i=1; i<=n; i++){
      if(a[i]==a[i+1]){
         tong+=1;
         i++;
      }
   }
   cout<<tong;
}

int main(){
       freopen("TONGBANGKHONG.INP", "r", stdin);
       freopen("TONGBANGKHONG.OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}
