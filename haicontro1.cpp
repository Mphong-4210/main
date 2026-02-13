
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float

#define el "\n"
#define fi first
#define se second
#define pb push_back

const int maxn=10e6+42;
const int N=1e3;
int a[maxn], y[N][N], dem[maxn], b[maxn];

void solve(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	for(int i=1; i<=n; i++){
		cin>>b[i];
	}
    int i=1, j=1;
    while(i<=n||j<=n){
        if(i>n){cout<<b[j]<<' '; j++;}
        if(j>n){cout<<a[i]<<' '; i++;}
        if(a[i]<=b[j]){
            cout<<a[i]<<' ';
            i++;
        }
        if(a[i]>b[j]){
            cout<<b[j]<<' ';
            j++;
        }
    }
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}