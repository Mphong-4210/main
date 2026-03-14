#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k,q;
    cin>>k>>q;

    const int n=1000000;
    vector<long long>s(n+1,0);
    vector<int>p(n+1,0);

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i) s[j]+=i;
    }

    for(int i=1;i<=n;i++){
        p[i]=p[i-1]+(s[i]>=k);
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<p[r]-p[l-1]<<"\n";
    }

    return 0;
}
