#include<bits/stdc++.h>
using namespace std;

bool laSNT(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve(){
    int n, dem=0;
    cin >> n;
    for(int i=2; i<=n-2; i++){
        if(laSNT(i) && laSNT(i+2)){
            dem++;
        }
    }
    cout << dem;
}

int main(){
    solve();
}
