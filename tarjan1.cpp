#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define el '\n'

const int N = 1e6 + 5;
const int M = 2e6 + 5;

int n, m;

int head[N], to[M], nxt[M], ecnt;
int rhead[N], rto[M], rnxt[M], recnt;

bool vis[N];

void add(int u, int v){
    to[++ecnt] = v;
    nxt[ecnt] = head[u];
    head[u] = ecnt;
}

void radd(int u, int v){
    rto[++recnt] = v;
    rnxt[recnt] = rhead[u];
    rhead[u] = recnt;
}

void dfs(int s, int head[], int to[], int nxt[]){
    static int st[N];
    int top = 0;

    st[++top] = s;
    vis[s] = 1;

    while(top){
        int u = st[top--];
        for(int i = head[u]; i; i = nxt[i]){
            int v = to[i];
            if(!vis[v]){
                vis[v] = 1;
                st[++top] = v;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        add(u, v);
        radd(v, u);
    }

    dfs(1, head, to, nxt);
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            cout << 0;
            return 0;
        }
    }

    memset(vis, 0, n + 1);

    dfs(1, rhead, rto, rnxt);
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            cout << 0;
            return 0;
        }
    }

    cout << 1;
}
