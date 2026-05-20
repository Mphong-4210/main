#include <bits/stdc++.h>
using namespace std;
#define ll long
int main() {
	ll n, cnt=0;
	cin>>n;
	if(n==1){
	    ll x;
	    cin>>x;
	    if(x==0){
	        cout<<"NO";    
	        return 0;
 
	    }
	    if(x==1){
	        cout<<"YES";
	        return 0;
 
	    }
	}
    else{
        for(int i=1; i<=n; i++){
            ll x;
            cin>>x;
            if(x==0){
                cnt++;
            }
            else{
                continue;
            }
        }
    }
    if(cnt==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
