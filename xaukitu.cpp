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
int n,cnt[26];
str S;
str ans;

void sol()
{
    cin>>n;
    while(n--)
    {
        memset(cnt, 0, sizeof(cnt));
        cin>>S;
        for(int x:S) cnt[x-'A']++;
        for(int i=0;i<26;++i)
        {
            if(cnt[i]==2)
            {
                ans.pb((char)('A'+i));
            }
        }
    }
    cout<<ans;
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
    ffopen("xkt");
    t=1;
    //cin>>t;
    while(t--) sol();
    ret 0;
}
