#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'

int n,m;
int par[1000005];

int find(int u){
    if(par[u]==u) return u;
    return par[u]=find(par[u]);
}

void unite(int u,int v){
    u=find(u);
    v=find(v);
    if(u!=v) par[u]=v;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m;
    for(int i=1;i<=n;i++) par[i]=i;

    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        unite(u,v);
    }

    int cnt=0;
    for(int i=1;i<=n;i++)
        if(find(i)==i) cnt++;

    cout<<cnt;
}
