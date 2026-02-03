#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
#define fi first 
#define se second
#define vect vector
#define bend(v) v.begin(),v.end()
#define ms  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define l(s) s.size()
const ll maxn=1e6+1;
ll t;
void ffopen(const string& file){
    if(file.empty())return;
    freopen((file + ".inp").c_str(), "r", stdin);
    freopen((file + ".out").c_str(), "w", stdout);
}

int main(){
	ms
	//dequy x
	ffopen("CANBANG");
	cin>>t;
	while(t--){
	ll n; cin>>n;
	vector<ll>f(n+1);
	vector<ll>sum(n+1);
	for(int i=1;i<=n;i++)
		cin>>f[i];
	for(int i=1;i<=n;i++)
		sum[i]=sum[i-1]+f[i];
	for(int i=1;i<=n;i++){
		ll rest=sum[i-1];
		ll ress=sum[n]-sum[i];
		if(rest==ress){
			cout<<i<<" ";
			break;
		}
		else{
			if(i==n&&rest!=ress)
				cout<<-1;
		}
	}	
	cout<<"\n";
}
}

