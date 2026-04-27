#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float
#define str string
#define ldb long double

#define vll vector<ll>
#define pll pair<ll,ll>

#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define el '\n'

const int base = 31;

ll n,q;
str s;
vll hashl,hashr,pw;

ll get_hash_l(int l,int r){
    if(l==0) return hashl[r];
    return hashl[r] - hashl[l-1]*pw[r-l+1];
}

ll get_hash_r(int l,int r){
    if(r==n-1) return hashr[l];
    return hashr[l] - hashr[r+1]*pw[r-l+1];
}

void solve(){
    cin >> n >> s;

    hashl.assign(n,0);
    hashr.assign(n,0);
    pw.assign(n+1,1);

    for(int i=1;i<=n;i++) pw[i]=pw[i-1]*base;

    hashl[0]=s[0]-'A'+1;
    for(int i=1;i<n;i++){
        hashl[i]=hashl[i-1]*base+(s[i]-'A'+1);
    }

    hashr[n-1]=s[n-1]-'A'+1;
    for(int i=n-2;i>=0;i--){
        hashr[i]=hashr[i+1]*base+(s[i]-'A'+1);
    }

    cin >> q;
    while(q--){
        ll l,r;
        cin >> l >> r;
        l--,r--;

        if(get_hash_l(l,r)==get_hash_r(l,r)) cout<<"YES"<<el;
        else cout<<"NO"<<el;
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
