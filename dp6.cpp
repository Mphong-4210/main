#include <bits/stdc++.h>
using namespace std;
using lli=long long;
const lli INF=1e9;
lli a[1005][1005];
lli f[1005][1005];
void ffopen(const string& file)
{
    if(file.empty())return;
    freopen((file + ".inp").c_str(), "r", stdin);
    freopen((file + ".out").c_str(), "w", stdout);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ffopen("Bangso");
    lli n;
    cin>>n;
    for(lli i=1;i<=n;i++)
    {
        for(lli j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(lli i=0;i<=n;i++)
    {
        f[i][0]=f[0][i]=2e18;
    }
    f[1][1]=a[1][1];
    for(lli i=1;i<=n;i++)
    {
        for(lli j=1;j<=n;j++)
        {
            if(i==1&&j==1) continue;
            f[i][j]=a[i][j]+min(f[i-1][j],f[i][j-1]);
        }
    }
    cout<<f[n][n]<<'\n';
    vector<pair<lli,lli>> truyvet;
    lli i=n,j=n;
    while(i>=1&&j>=1)
    {
        truyvet.push_back({i,j});
        if(i==1&&j==1) break;
        if(i>1&&(j==1||f[i-1][j]<f[i][j-1]))
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    for(lli k=truyvet.size()-1;k>=0;k--)
    {
        cout<<truyvet[k].first<<','<<truyvet[k].second<<'\n';
    }
}
