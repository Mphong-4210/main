#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef float fl;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define pii pair<int,int>
#define pll pair<ll,ll>

const ll inf = 4e18;
const int INF = 1e9;

int dp[2][4][4][4][4];

int calc(int a, int b, int x){
    bool used[4] = {};
    if(a) used[a] = 1;
    if(b) used[b] = 1;
    used[x] = 1;

    int cnt = 0;
    for(int i = 1; i <= 3; i++) cnt += used[i];
    return cnt;
}

void solve(){
    int n;
    string s;

    cin >> n >> s;

    vector<int> food(n + 1);

    for(int i = 1; i <= n; i++){
        if(s[i - 1] == 'M') food[i] = 1;
        else if(s[i - 1] == 'F') food[i] = 2;
        else food[i] = 3;
    }

    for(int a = 0; a < 4; a++)
        for(int b = 0; b < 4; b++)
            for(int c = 0; c < 4; c++)
                for(int d = 0; d < 4; d++)
                    dp[0][a][b][c][d] = -INF;

    dp[0][0][0][0][0] = 0;

    for(int i = 1; i <= n; i++){
        int cur = (i - 1) & 1;
        int nxt = i & 1;

        for(int a = 0; a < 4; a++)
            for(int b = 0; b < 4; b++)
                for(int c = 0; c < 4; c++)
                    for(int d = 0; d < 4; d++)
                        dp[nxt][a][b][c][d] = -INF;

        int x = food[i];

        for(int a = 0; a < 4; a++){
            for(int b = 0; b < 4; b++){
                for(int c = 0; c < 4; c++){
                    for(int d = 0; d < 4; d++){
                        int val = dp[cur][a][b][c][d];
                        if(val < 0) continue;

                        dp[nxt][b][x][c][d] = max(
                            dp[nxt][b][x][c][d],
                            val + calc(a, b, x)
                        );

                        dp[nxt][a][b][d][x] = max(
                            dp[nxt][a][b][d][x],
                            val + calc(c, d, x)
                        );
                    }
                }
            }
        }
    }

    int ans = 0;
    int last = n & 1;

    for(int a = 0; a < 4; a++)
        for(int b = 0; b < 4; b++)
            for(int c = 0; c < 4; c++)
                for(int d = 0; d < 4; d++)
                    ans = max(ans, dp[last][a][b][c][d]);

    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("input.inp","r",stdin);
    // freopen("output.out","w",stdout);

    solve();
    return 0;
}
