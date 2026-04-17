#include<bits/stdc++.h>
using namespace std;

const int nm=505;
const int vc=1e9;

int n,m,i,j,x,y,z,u,v,vtm,maxmin,maxi;
vector<bool> b,bb;
vector<int> a[nm],c[nm],d,t,tmm,dm,dd,tt;

void dijkstra(int u)
{
    int i,vt,mind;
    d=dd; t=tt; b=bb;
    for(i=0;i<a[u].size();i++)
    {
        d[a[u][i]]=c[u][i];
        t[a[u][i]]=u;
    }
    do
    {
        mind=vc;
        for(i=1;i<=n;i++)
            if(mind>d[i]&&b[i]==0)
            {
                mind=d[i];
                vt=i;
            }
        if(mind==vc) break;
        b[vt]=1;
        for(i=0;i<a[vt].size();i++)
            if(d[a[vt][i]]>c[vt][i]+d[vt])
            {
                d[a[vt][i]]=c[vt][i]+d[vt];
                t[a[vt][i]]=vt;
            }
    }
    while(mind<vc);
}

void inqk(int u,int v)
{
    cout<<u<<" ";
    if(dm[u]!=v) inqk(dm[u],v);
}

int main()
{
    freopen("HLD.inp","r",stdin);
    freopen("HLD.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            cin>>x;
            if(x>0)
            {
                a[i].push_back(j);
                c[i].push_back(x);
            }
        }

    for(i=1;i<=n+1;i++)
    {
        dd.push_back(vc);
        tt.push_back(0);
        bb.push_back(0);
    }

    maxmin=vc;
    for(i=1;i<=n;i++)
    {
        dijkstra(i);
        maxi=0;
        for(j=1;j<=n;j++)
            if(j!=i&&d[j]>maxi) maxi=d[j];
        if(maxi<maxmin)
        {
            maxmin=maxi;
            vtm=i;
            dm=d;
            tmm=t;
        }
    }

    dm=tmm;
    cout<<vtm<<" "<<maxmin<<endl;
    for(i=1;i<=n;i++)
        if(i!=vtm)
        {
            inqk(i,vtm);
            cout<<vtm<<endl;
        }

    return 0;
}
