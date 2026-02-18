#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
const int N=1e3;
int y[maxn], a[N][N], x[maxn], dem[maxn];


void solve(){
    int n, de=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>y[i];
        dem[y[i]]++;
    }
    sort(y, y+n);
    for(int i=1; i<=n; i++){
        if(y[i]!=y[i+1]){
            de+=1;
    }
        else{
        continue;
        }
    }
    cout<<de;

}

int main(){
       //freopen(".INP", "r", stdin);
       //freopen(".OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}
