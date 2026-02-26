#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("DAYCONT.INP","r",stdin);
    freopen("DAYCONT.OUT","w",stdout);
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<long long> lis;
    vector<int> pos;
    vector<int> truoc(n,-1);
    vector<int> vitri(n);
    for(int i=0;i<n;i++){
        int j=lower_bound(lis.begin(),lis.end(),a[i]) - lis.begin();
        if(j==(int)lis.size()){
            lis.push_back(a[i]);
            pos.push_back(i);
        }else{
            lis[j]=a[i];
            pos[j]=i;
        }
        vitri[i]=j;
        if(j>0) truoc[i]=pos[j-1];
    }
    int m=lis.size();
    cout<<m<<"\n";

    vector<long long> kq;
    int idx=pos[m-1];
    while(idx!=-1){
        kq.push_back(a[idx]);
        idx=truoc[idx];
    }
    reverse(kq.begin(),kq.end());

    for(long long x:kq) cout<<x<<" ";
}
