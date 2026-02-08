
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
const int MAXN=1e6;
bool nt[MAXN+1];


void sang() {
    for (int i = 2; i <= MAXN; i++) nt[i] = true;
    for (int i = 2; i * i <= MAXN; i++) {
        if (nt[i]) {
            for (int j = i * i; j <= MAXN; j += i)
                nt[j] = false;
        }
    }
}

void sang1() {
    for (int i = MAXN; i <= 2*MAXN; i++) nt[i] = true;
    for (int i = MAXN; i * i <= 2*MAXN; i++) {
        if (nt[i]) {
            for (int j = i * i; j <= 2*MAXN; j += i)
                nt[j] = false;
        }
    }
}

void solve(){
    sang();
    //sang1();
    ll n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        while(!nt[a[i]]){
            a[i]--;
        }
        cout<<a[i]<<' ';
    }
}

int main(){
    //freopen("HAIUOC.INP","r",stdin);
    //freopen("HAIUOC.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}