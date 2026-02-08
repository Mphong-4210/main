#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long
#define fi first
#define se second
#define pb push_back
#define fi first
#define se second

const int MAXN = 1e6+5;
bool nt[MAXN + 1];

void sang() {
    for (int i = 2; i <= MAXN; i++) nt[i] = true;
    for (int i = 2; i * i <= MAXN; i++) {
        if (nt[i]) {
            for (int j = i * i; j <= MAXN; j += i)
                nt[j] = false;
        }
    }
}

void solve(){
    int n, tong=0;
    cin>>n;
    for(int i=2; i<=n; i++){
        if(nt[i]&&n%i==0){
            tong+=1;
        }
    }
    cout<<tong<<el;
}

int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sang();
    int T;
    cin>>T;
    for(int i=1; i<=T; i++){
        solve();
    }

}
