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
    string s;
    ll dem=0;
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
       if(s[i]==' '){
              dem++;
       }
    }
    cout<<dem+1<<el;
    for(int i=0; i<s.size(); i++){
       if(s[i]!=' '){
              cout<<s[i];
       }
       else{
              cout<<el;
       }
    }
}
int main(){
       //freopen(".INP", "r", stdin);
       //freopen(".OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}