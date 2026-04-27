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

str s;
int n;
vll h, pw, res;

ll getHash(int l,int r){
    return h[r] - h[l-1]*pw[r-l+1];
}

void solve(){
    cin >> s;
    n = s.size();

    h.assign(n+1,0);
    pw.assign(n+1,1);
    res.assign(n,0);

    for(int i=1;i<=n;i++){
        h[i] = h[i-1]*base + (s[i-1]-'a'+1);
        pw[i] = pw[i-1]*base;
    }

    res[0] = n;

    for(int i=1;i<n;i++){
        int l=0,r=n-i,ans=0;
        while(l<=r){
            int mid=(l+r)>>1;
            if(mid==0 || getHash(1,mid)==getHash(i+1,i+mid)){
                ans=mid;
                l=mid+1;
            }else r=mid-1;
        }
        res[i]=ans;
    }

    for(auto x:res) cout<<x<<" ";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
