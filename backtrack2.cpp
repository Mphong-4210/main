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

const int maxn=1e6+42;
const int N=1e3;
ll a[maxn], y[N][N], dem[maxn];

vector<int> v;
ll n, k;

void in_kq(){
    for(int x : v) cout << x << " ";
    cout << el;
}

void backtrack(int pos, int start){
    if(pos == k){
        in_kq();
        return;
    }
    for(int i = start; i <= n; i++){
        v.push_back(i);
        backtrack(pos + 1, i + 1);
        v.pop_back();
    }
}

void solve(){
    cin >> n >> k;
    backtrack(0, 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
