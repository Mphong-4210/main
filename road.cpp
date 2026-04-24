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

int dr[]={-2, -2, -1, -1, 1, 1, 2, 2};
int dc[]={-1, 1, -2, 2, -2, 2, -1, 1};

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

void solve(){
    int n, s, t, u, v;
    cin>>n;
    cin>>s>>t>>u>>v;
    s--; t--; u--; v--;

    vector<vector<int>> a(n, vector<int>(n));
    FOR(i,0,n-1){
        FOR(j,0,n-1){
            cin>>a[i][j];
        }
    }

    if(a[s][t]==0 || a[u][v]==0){
        cout<<-1;
        ret;
    }

    vector<vector<int>> dist(n, vector<int>(n, -1));
    queue<pll> q;

    q.push({s,t});
    dist[s][t]=0;

    while(!q.empty()){
        pll cur=q.front(); q.pop();
        int r=cur.fi, c=cur.se;

        if(r==u && c==v){
            cout<<dist[r][c];
            ret;
        }

        FOR(i,0,7){
            int nr=r+dr[i];
            int nc=c+dc[i];

            if(nr>=0 && nr<n && nc>=0 && nc<n &&
               a[nr][nc]==1 && dist[nr][nc]==-1){
                dist[nr][nc]=dist[r][c]+1;
                q.push({nr,nc});
            }
        }
    }

    cout<<-1;
}

int main(){
    //ffopen("filename");
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