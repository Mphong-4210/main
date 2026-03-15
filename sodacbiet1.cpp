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
const int N=2e5+7;
const ll mod=1e9+7,inf=1e18;
int t;
int n;
ll c,res;

bool check(int x)
{
    int last=-1;
    while(x!=0)
    {
        if(last!=-1 && x%10!=last) ret 0;
        last=x%10;
        x/=10;
    }
    ret 1;
}

void sol()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>c;
        if(check(c)) res++;
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
    ffopen("sdb");
    t=1;
    //cin>>t;
    while(t--) sol();
    ret 0;
}
