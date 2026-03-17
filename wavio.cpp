#include<bits/stdc++.h>
using namespace std;

int n,a[10005],L[10005],R[10005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

   

    while(cin>>n){
        for(int i=1;i<=n;i++) cin>>a[i];

        vector<int> v;

        v.clear();
        for(int i=1;i<=n;i++){
            int pos=lower_bound(v.begin(),v.end(),a[i])-v.begin();
            if(pos==v.size()) v.push_back(a[i]);
            else v[pos]=a[i];
            L[i]=pos+1;
        }

        v.clear();
        for(int i=n;i>=1;i--){
            int pos=lower_bound(v.begin(),v.end(),a[i])-v.begin();
            if(pos==v.size()) v.push_back(a[i]);
            else v[pos]=a[i];
            R[i]=pos+1;
        }

        int ans=0;
        for(int i=1;i<=n;i++){
            int k=min(L[i],R[i]);
            ans=max(ans,2*k-1);
        }

        cout<<ans<<"\n";
    }
}
