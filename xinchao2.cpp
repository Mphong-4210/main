#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fl float

void solve(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    for(int i=1; i<=n; i++){
        string s;
        ll chu=0;
        cin>>s;

        for(ll i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                chu+=1;
            }
        }

        if(chu!=s.size()){
            cout<<"NO"<<endl;
        }
        else{
            int j=0, dem=0;
            for(int i=0; i<s.size(); i++){
                if(s[i]==a[j]){
                    j+=1;
                    if(j==s.size()+1){
                        break; 
                    }
                }
            }
            if(j==a.size()){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}

int main(){
    solve();
}
