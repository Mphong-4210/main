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
ll n,sum,max_len,cnt,cur_len,res;
void ffopen(const string& file){
    if(file.empty())return;
    freopen((file + ".inp").c_str(), "r", stdin);
    freopen((file + ".out").c_str(), "w", stdout);
}

int main(){
	ms
	ffopen("XAYDUNGTHAP");
	cin>>n;
	map<int,int> mp;
	ll max_hei=0;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		mp[x]++;
		if(mp[x]>max_hei)
			max_hei=mp[x];
	}
	cout<<max_hei<<" "<<mp.size();
}
