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
ll n,t;
ll a[maxn];
void ffopen(const string& file){
    if(file.empty())return;
    freopen((file + ".inp").c_str(), "r", stdin);
    freopen((file + ".out").c_str(), "w", stdout);
}
void solve(){
	cin>>n;
	vect<ll>f(n);
	for(int i=0;i<n;i++)
		cin>>f[i];
	if(n<3){
		cout<<"NO"<<"\n";
		return;
	}
	vect<ll> min_left(n);
	min_left[0]= LLONG_MAX;
	for(int i=1;i<n;i++)
		min_left[i]=min(min_left[i-1],f[i-1]);
	vect<ll> max_right(n);
	max_right[0]= LLONG_MIN;
	for(int i=n-2;i>=0;i--)
		max_right[i]=max(max_right[i+1],f[i+1]);
	for(int i=1;i<n-1;i++)
		if(min_left[i]<f[i]&&f[i]<max_right[i]){
			cout<<"YES"<<'\n';
			return;
		}
		
		cout<<"NO"<<'\n';
}
int main(){
	ms
	//ffopen("TONGBANGKHONG");
	cin>>t;
	while(t--){
		solve();		
}
}
