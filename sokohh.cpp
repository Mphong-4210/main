#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float

#define vll vector<ll>
#define pll pair<ll,ll>

const int N = 100000 + 5;
void ffopen(string name){
    string infile=name + ".inp";
    string outfile=name + ".out";
    if(FILE* f = fopen(infile.c_str(), "r")){
        fclose(f);
        freopen(infile.c_str(), "r", stdin);
        freopen(outfile.c_str(), "w", stdout);
    }
}
ll a,b;
ll sumd[N];

void solve(){
    cin>>a>>b;

    for(int i=1;i<=b;i++){
        for(int j=i*2;j<=b;j+=i){
            sumd[j]+=i;
        }
    }

    ll ans=0;
    for(int i=a;i<=b;i++){
        if(sumd[i]>i) ans++;
    }

    cout<<ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ffopen("khonghoanhao");

    solve();

    return 0;
}
