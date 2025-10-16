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
        for(int j=1; j<=a[i]; j++){
            cin>>b[j];
        }
        for(int j=2; j<=a[i]; j++){
            if(b[j]>b[j-1]){
                cout<<b[j]<<" ";
            }
        }
        cout<<b[a[i]];
        cout<<el;
    }
}

int main(){
       freopen("LANHDAO.INP", "r", stdin);
       freopen("LANHDAO.OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}