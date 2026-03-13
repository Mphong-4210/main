#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define ull unsigned long long
#define fumo ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define str string
#define sz size()
#define ldb long double
#define db double
#define reimu(v) v.begin(), v.end()
#define ret return
#define skip cin.ignore()
#define fi first
#define se second
#define int long long
using namespace std;
//ᗜˬᗜ
const int N=1e6+7,M=1e6+7;
const ll mod=1e9+7,inf=1e18;
int t;
int n,s;
vector<int> idx[N];
bool prime[M];
ll res;

void sieve()
{
    for(int i=2;i<M;++i) prime[i]=1;
    for(int i=2;i*i<M;++i)
    {
        if(prime[i])
        {
            for(int j=i*i;j<M;j+=i) prime[j]=0;
        }
    }
}

void sol()
{
    cin>>n>>s;
    for(int i=0;i<s;++i) idx[i].clear();
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        idx[(i-1)%s].pb(x);
    }
    if(s>=n)
    {
        cout<<0;
        ret;
    }
    for(int i=0;i<s;i++)
    {
        int cnt=0;
        for(int j=0;j<idx[i].sz;j++)
        {
            if(idx[i][j]==1) cnt++;
            else if(prime[idx[i][j]])
            {
                int nxt=0;
                int k=j+1;
                while(k<idx[i].sz && idx[i][k]==1)
                {
                    nxt++;
                    k++;
                }
                res+=cnt+nxt+cnt*nxt;
                cnt=0;
            }
            else cnt=0;
        }
    }
    cout<<res;
}


void ffopen(const str &name)
{
    if(!name.empty()){
        freopen((name+".inp").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }
}

signed main()
{
    fumo
    ffopen("ddc");
    sieve();
    t=1;
    //cin>>t;
    while(t--) sol();
    ret 0;
}
