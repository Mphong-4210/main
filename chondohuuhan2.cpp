#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int nm=10001;
const int nn=10000;
int w,n,i,j,vti,vtj,dem,x,y,z,t;
int a[nm],b[nm],c[nm],d[nm];
int dp[nn][nm];
void taobang()
{
    for(i=1;i<=dem;i++)
    for(j=1;j<=w;j++)
            if(j<a[i])dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+b[i]);
}
void truyhoi()
{
    int mw=dp[dem][w];
    j=w;
    cout<<mw<<endl;
    for(i=dem;i>=1;i--)
        if(dp[i][j]!=dp[i-1][j])
    {
        d[c[i]]++;
        j=j-a[i];
    }
    for(i=1;i<=n;i++)cout<<d[i]<<'\n';
}
int main()
{
    
    cin>>n>>w;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y>>z;
        for(j=1;j<=z;j++)
        {
            dem++;
            a[dem]=x;
            b[dem]=y;
            c[dem]=i;
        }
    }
    taobang();
    truyhoi();
    return 0;
}
