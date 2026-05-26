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
vector<string>ans;
string res;
bool vis[N][N];
ll n;

void backtrack(int i, int j){
    if(i==n && j==n){
        ans.pb(res);
        return;
    }
     vis[i][j]=true;
    if(i+1<=n&&y[i+1][j]==1&&!vis[i+1][j]){
        res.pb('D');
        backtrack(i+1,j);
        res.pop_back();
    }
     if(j>1&&y[i][j-1]==1&&!vis[i][j-1]){
        res.pb('L');
        backtrack(i,j-1);
        res.pop_back();
    }
    if(j+1<=n&&y[i][j+1]==1&&!vis[i][j+1]){
        res.pb('R');
        backtrack(i,j+1);
        res.pop_back();
    }
    if(i>1&&y[i-1][j]==1&&!vis[i-1][j]){
        res.pb('U');
        backtrack(i-2,j);
        res.pop_back();
    }
    vis[i][j]=false;


}

void solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>y[i][j];
        }
    }
    if(y[n][n]==0){
        cout<<-1;
        return;
    }
    backtrack(1, 1);
    if(ans.empty()){
        cout<<-1;
        return;
    }
    for(auto x:ans){
        cout<<x<<'\n';
    }
}

int main(){
    //freopen("DAUNGOAC.INP","r",stdin);
    //freopen("DAUNGOAC.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
