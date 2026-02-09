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
int a[maxn], b[maxn];


bool nt(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}


void solve(){
    string s;
    cin>>s;
    ll tong=0;
    set<string> st;
    for(int i=1; i<s.size(); i++){
        for(int j=0; j+i<s.size(); i++){
            st.insert(s.substr(j,i));
        }
    }

    for(auto c:se){
        ll x=stoll(c);
        if(nt(x)){
            tong+=1;
        }
    }
    cout<<tong;

    
}
int main(){
       freopen("PRIME.INP", "r", stdin);
       freopen("PRIME.OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}