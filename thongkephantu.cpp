#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
#define fi first 
#define se second
#define vect vector
#define bend(v) v.begin(),v.end()
#define l(s) s.size()
const ll maxn=1e6+1;
ll n,sum,max_len,cnt,cur_len,res;
void ffopen(const string& file){
    if(file.empty())return;
    freopen((file + ".inp").c_str(), "r", stdin);
    freopen((file + ".out").c_str(), "w", stdout);
}

int main(){
	ffopen("THONGKE");
	cin>>n;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		mp[x]++;
	}
	
	for(pair<int,int> c: mp)
		cout<<c.fi<<":"<<c.se<<'\n';
}


