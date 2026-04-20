#include <bits/stdc++.h>
using namespace std;

int n, m, p[1005];
double x[1005], y[1005];

int find(int u){
    if(p[u]==u) return u;
    return p[u]=find(p[u]);
}

void uni(int u,int v){
    u=find(u); v=find(v);
    if(u!=v) p[u]=v;
}

struct E{
    int u,v;
    double w;
};

int main(){
    freopen("HIGHWAY.INP","r",stdin);
    freopen("HIGHWAY.OUT","w",stdout);

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
        p[i]=i;
    }

    cin>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        uni(u,v);
    }

    vector<E> a;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            double d=sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
            a.push_back({i,j,d});
        }
    }

    sort(a.begin(),a.end(),[](E a,E b){ return a.w<b.w; });

    double res=0;
    for(auto e:a){
        if(find(e.u)!=find(e.v)){
            uni(e.u,e.v);
            res+=e.w;
        }
    }

    cout<<fixed<<setprecision(5)<<res;
}
