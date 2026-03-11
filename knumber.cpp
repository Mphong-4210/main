#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[15][15];
bool used[15];

long long best = -1;
long long ways = 0;

void backtrack(int row, int cnt, long long sum){
    
    if(cnt == k){
        if(sum > best){
            best = sum;
            ways = 1;
        }
        else if(sum == best){
            ways++;
        }
        return;
    }

    if(row > n) return;
    backtrack(row + 1, cnt, sum);
    for(int j = 1; j <= n; j++){
        if(!used[j]){
            used[j] = true;
            backtrack(row + 1, cnt + 1, sum + a[row][j]);
            used[j] = false;
        }
    }
}

int main(){

    freopen("CHONSO1.INP","r",stdin);
    freopen("CHONSO1.OUT","w",stdout);

    cin >> n >> k;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j];

    backtrack(1,0,0);

    cout << best << " " << ways;
}
