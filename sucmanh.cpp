#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
const int N=1e3;
int y[maxn], a[maxn], x[maxn], b[maxn];


void solve(){
   int n;
   cin>>n;
   for(int i=1; i<=n; i++){
      cin>>a[i];
   }
   for(int i=1; i<=n; i++){
      cin>>b[i];
   }
   sort(a+1, a+1+n);
   sort(b+1, b+1+n);
   for(int i=1; i<=n; i++){
      if(b[i]>a[i]){
         cout<<"NO";
         return 0;
      }
   }
   cout<<"YES";
}

int main(){
       //freopen("SUCMANH.INP", "r", stdin);
       //freopen("SUCMANH.OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}
