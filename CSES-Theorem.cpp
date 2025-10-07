#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
int a[maxn];


void solve(){
    ll n;
    cin>>n;
    cout<<n<<" ";

    while(n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<' ' ;
        }
        else{
            n=(n*3)+1;
            cout<<n<<' ';
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}