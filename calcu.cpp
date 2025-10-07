#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fl float
#define el "\n"
#define ull unsigned long long

const int maxn=10e6+42;
int a[maxn];


void solve(){
    ll a, b;
    char c;
    cin>>a>>c>>b;
    if(c=='/'){
        cout<<a<<"/"<<b<<"=";
        cout<<fixed<<setprecision(2)<<(double)a/b;
    }
    else if(c=='+'){
        cout<<a<<"+"<<b<<"=";
        cout<<a+b;
    }
    else if(c=='-'){
        cout<<a<<"-"<<b<<"=";
        cout<<a-b;
    }
    else if (c == '%') {
        cout << a << "%" << b << "=";
        cout << a % b;
    }
    else{
        cout<<a<<"*"<<b<<"=";
        cout<<a*b;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
