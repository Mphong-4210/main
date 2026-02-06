
    #include<bits/stdc++.h>
    using namespace std;

    #define ll long long
    #define ull unsigned long long
    #define db double
    #define fl float

    #define el "\n"
    #define fi first
    #define se second
    #define pb push_back

    const int maxn=10e6+42;
    const int N=1e3;
    int a[maxn], y[N][N], dem[maxn];


    void solve(){
        ll x;
        cin>>x;
        for(int i=1; i<=x; i++){
            cin>>a[i];
        }
        vector<ll> le;
        vector<ll> chan;
        sort(a+1, a+1+x);
        if(x%2==0){
            ll y=x/2;
            for(int i=1; i<=y; i++){
                le.push_back(a[i]);
            }
            for(int i=y+1; i<=x; i++){
                chan.push_back(a[i]);
            }
            for(int i=0; i<y; i++){
                cout<<le[i]<<' ';
                cout<<chan[i]<<' ';
            }
        }
        else{
            ll y=(x-1)/2;
            for(int i=1; i<=y; i++){
                le.push_back(a[i]);
            }
            for(int i=y+1; i<x; i++){
                chan.push_back(a[i]);
            }
            for(int i=0; i<y; i++){
                cout<<le[i]<<' ';
                cout<<chan[i]<<' ';
            }
            cout<<a[x];
        }
    }

    int main(){
        //freopen(".INP", "r", stdin);
        //freopen(".OUT", "w", stdout);
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        solve();
    }