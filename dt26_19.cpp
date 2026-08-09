#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define pb push_back
#define fi first
#define se second
 
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
const int MOD = 1e9 + 7;
const int MX = 1e5 + 5;
const ll inf = LLONG_MAX/2;
void fre(string name) {
    string inFile = name + ".inp";
    string outFile = name + ".out";
    if (FILE* f = fopen(inFile.c_str(), "r")) {
        fclose(f);
        freopen(inFile.c_str(), "r", stdin);
        freopen(outFile.c_str(), "w", stdout);
    }
}
 
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n;
ll a[20];
ll ans = inf;
void dfs(int i, int k, int dist, ll cost) {
    if (dist > k) return;
    if (i ==n) {
        ans = min(ans,cost);
        return;
    }
    dfs(i+ 1, k, dist+1, cost);
    dfs(i+1, k, 1, cost + 1);
    dfs(i+1, k+1,1, cost + 1 +a[i+1]);
}
 
void sol() {
    int n;
    cin >> n;
    vector<ll> a(n, 0);
    for(int i = 1; i < n;i++){
        cin >> a[i];
    }
    int lmax=1;
    while( (ll)lmax * (lmax-1)/2 <= n ) lmax++;
    vector<ll> dppre(n, inf), dpcur(n, inf), buy(n, inf);
    dppre[0]=0;
    for(int j = 1; j< n; j++) dppre[j]=dppre[j-1]+1;
    ll ans = dppre[n-1];
    vector<int> dpb1(n+5), dpb2(n+5);
    for(int l = 2; l<=lmax; l++){
        for(int j=0; j <n; j++) buy[j] = inf;{
            int hd = 0, tl=0;
            int w = l-1;
            for(int j = 1; j< n; j++){
                int idx=j-1;
                while(tl > hd && dppre[dpb1[tl-1]] >= dppre[idx]) tl--;
                dpb1[tl++] = idx;
                while(tl>hd && dpb1[hd] < j-w) hd++;
                if(tl>hd && dppre[dpb1[hd]] < inf){
                    buy[j] = dppre[dpb1[hd]] + 1 + a[j];
                }
            }
        }
        
        for(int j = 0; j <n; j++) dpcur[j] = inf;{
            int hd=0, tl=0;
            int w2=l;
            for(int j= 1; j< n; j++){
                int idx=j-1;
                while(tl > hd && dpcur[dpb2[tl-1]] >= dpcur[idx]) tl--;
                dpb2[tl++]=idx;
                while(tl > hd && dpb2[hd] < j-w2) hd++;
                ll wo = inf;
                if(tl > hd && dpcur[dpb2[hd]] < inf) wo = dpcur[dpb2[hd]]+1;
                dpcur[j] = min(wo, buy[j]);
            }
        }
        int lo = max(0, n-l);
        for(int i=lo;i<=n-1;i++){
            if(dpcur[i] < ans) ans = dpcur[i];
        }
        dppre.swap(dpcur);
    }
    cout << ans << "\n";
}
 
int main() {
    fastio();
    fre("aaa");
 
    int t = 1;
    while (t--) {
        sol();
    }
 
    return 0;
}
