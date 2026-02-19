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
    ll so=0, chu=0;
    string s;
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            so+=1;
        }
        else if(isalpha(s[i])){
            chu+=1;
        }
    }
    cout<<so<<chu;

}

int main(){
       //freopen(".INP", "r", stdin);
       //freopen(".OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}
