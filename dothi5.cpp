#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 1005;
ll a[maxn][maxn];

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(a[i][j]!=0){
                cout<<i<<" "<<j<<" "<<a[i][j]<<endl;
            }
        }
    }
}
