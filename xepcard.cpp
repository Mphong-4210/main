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
const int N=1e6+7;
const ll mod=1e9+7,inf=1e18;
int t;
int n;
int A[N],dp[N];
int cnt,res;
bool prime[N];

void sieve()
{
    for(int i=2;i<N;++i) prime[i]=1;
    for(int i=2;i*i<N;++i)
    {
        if(prime[i])
        {
            for(int j=i*i;j<N;j+=i) prime[j]=0;
        }
    }
}

void sol()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>A[i];
        dp[i]=1;
        for(int j=i-1;j>=max(1LL, i-6);--j)
        {
            if(prime[abs(A[i]-A[j])]) dp[i]=max(dp[i], dp[j]+1);
        }
        //cout<<dp[i]<<' ';
        res=max(res, dp[i]);
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
    ffopen("xt");
    sieve();
    t=1;
    //cin>>t;
    while(t--) sol();
    ret 0;
}
