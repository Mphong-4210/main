#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef float fl;
typedef long double ldb;
typedef unsigned long long ull;
typedef string str;
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define dq deque<ll>
#define ret return
#define si size()
#define el '\n'
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define bend(x) (x).begin(), (x).end()
#define FOR(i,a,b) for(int i=(a); i<=(b); i++)
#define FORN(i,a,b) for(int i=(a); i>=(b); i--)
//Phong

const int MAXN = 1e6 + 42;
const double INF = 1e18;

void manhphong() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
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

struct td {
    db x, y;
    int dien;
};
db kc(td a, td b) {
    db dx=a.x-b.x, dy=a.y-b.y;
    return sqrt(dx*dx+dy*dy);
}
void solve(){
    int n;
    db ans=0;
    cin>>n;
    vector<td> p(n);
    for(int i=0; i<n; i++){
        cin>>p[i].x>>p[i].y>>p[i].dien;
    }
    vector<db> g(n, INF);
    vector<bool> sd(n, false);
    for (int i=0; i<n; i++){
        if(p[i].dien==1){
            g[i]=0;
        }
    }
    bool mp=false;
    for(int i=0; i<n; i++){
        if (p[i].dien==1){
            mp=true;
            break;
        }
    }
    if(!mp){
        g[0]=0;
    }
    for(int bc=0; bc<n; bc++){
        int u=-1;
        for(int i=0; i<n; i++){
            if(!sd[i]){
                if(u==-1||g[i]<g[u]){u=i;}
            }
        }
        if(u==-1||g[u]==INF){
            break;
        }
        sd[u]=true;
        ans+=g[u];
        for(int v=0; v<n; v++){
            if(sd[v]){
                continue;
            }
            db nc=kc(p[u], p[v]);
            if(p[u].dien==1&&p[v].dien==1){
                nc=0;
            }
            if(nc<g[v]){
                g[v]=nc;
            }
        }
    }
    cout<<fixed<<setprecision(3)<<ans;
}

int main() {
    ffopen("MAC");

    manhphong();

    solve();

    return 0;
}
