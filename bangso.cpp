#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[105][105];
    int dp[105][105];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j];

    dp[1][1] = a[1][1];

    for(int i=2;i<=n;i++)
        dp[i][1] = dp[i-1][1] + a[i][1];

    for(int j=2;j<=n;j++)
        dp[1][j] = dp[1][j-1] + a[1][j];

    for(int i=2;i<=n;i++)
        for(int j=2;j<=n;j++)
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + a[i][j];

    cout << dp[n][n] << endl;

    vector<pair<int,int>> path;

    int i=n, j=n;

    while(i>1 || j>1){
        path.push_back({i,j});

        if(i==1) j--;
        else if(j==1) i--;
        else if(dp[i-1][j] < dp[i][j-1]) i--;
        else j--;
    }

    path.push_back({1,1});

    reverse(path.begin(), path.end());

    for(auto p : path)
        cout << p.first << "," << p.second << endl;
}
