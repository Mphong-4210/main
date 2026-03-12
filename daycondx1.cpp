#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];

    static int dp[5001][5001];

    for(int i=1;i<=n;i++) dp[i][i]=1;

    for(int len=2;len<=n;len++){
        for(int i=1;i+len-1<=n;i++){
            int j=i+len-1;

            if(a[i]==a[j])
                dp[i][j]=dp[i+1][j-1]+2;
            else
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
        }
    }

    if(dp[1][n] < 2){
        cout<<0;
        return 0;
    }

    cout<<dp[1][n]<<endl;

    vector<int> left,right;

    int i=1,j=n;

    while(i<=j){
        if(a[i]==a[j]){
            left.push_back(a[i]);
            if(i!=j) right.push_back(a[j]);
            i++; j--;
        }
        else if(dp[i+1][j] > dp[i][j-1])
            i++;
        else
            j--;
    }

    for(int x:left) cout<<x<<" ";
    reverse(right.begin(),right.end());
    for(int x:right) cout<<x<<" ";
}
