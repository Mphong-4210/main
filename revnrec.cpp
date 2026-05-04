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
#define mll map<ll,ll>
#define dq deque<ll>
#define bend(x) (x).begin(), (x).end()
#define ret return
#define el '\n'
#define si size()
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define FOR(i,a,b) for(int i=(a); i<=(b); i++)
#define FORN(i,a,b) for(int i=(a); i>=(b); i--)
// Phong

void manhphong(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void ffopen(string name){
    string infile=name + ".inp";
    string outfile=name + ".out";
    if(FILE* f = fopen(infile.c_str(), "r")){
        fclose(f);
        freopen(infile.c_str(), "r", stdin);
        freopen(outfile.c_str(), "w", stdout);
    }
}

int n;
ll k;
int u, v, l, r;
void lat(vector<int> &a) {
    reverse(a.begin() + u - 1, a.begin() + v);
    reverse(a.begin() + l - 1, a.begin() + r);
}

void solve() {
    cin>>n>>k;
    cin>>u>>v;
    cin>>l>>r;
    vector<int> a(n), b;
    FOR(i, 0, n-1){
        a[i] = i + 1;
    }
    b=a;
    int v = 0;
    while (true){
        lat(b);
        v++;
        if(b==a){
            break;
        }
        if(v>n){
            break;
        }
    }
    k%=v;
    FOR(i,1,k){
        lat(a);
    }
    for(int x:a){
        cout<<x<<el;
    }
}

int main(){
    ffopen("revnrev");
    manhphong();
    solve();
}

/*
   ____  _                             
  |  _ \| |__   ___  _ __   __ _ 
  | |_) | '_ \ / _ \| '_ \ / _` |
  |  __/| | | | (_) | | | | (_| |
  |_|   |_| |_|\___/|_| |_|\__, |
                           |___/                           
*/
