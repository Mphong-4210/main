#include <bits/stdc++.h>
using namespace std;
#define ll long long


void pstg(int a, int b){
    ll dem = 0;
    ll i=1;
    for(; i<=max(a,b); i++){    
        if(a%i==0 && b%i==0 && i>dem){
            dem=i;
        }
    }
    int c=a/dem, d=b/dem;
    cout<<c<<'/'<<d;
}

int main() {
    int a, b;
    cin>>a>>b;
    pstg(a, b);

}
