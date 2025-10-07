#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
int a[maxn], b[maxn];


void solve(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i]>>b[i];
        int x=a[i];
        int y=b[i];
        if((2*x-y>=0)&&(2*y-x>=0)&&((2*x-y)%3==0)&&((2*y-x)%3==0)){
        
            cout<<"YES"<<el;
        }
        else{
            cout<<"NO"<<el;
        }
    }
    

}

int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
