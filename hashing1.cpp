#include<bits/stdc++.h>>
using namespace std;
#define ll long long
const int N = 1e4 + 5;
string s, x;

ll n, m, h[N], base = 31, Mod = 1e9 + 7;
ll Hash(string s){
    ll k = 0;
    for(int i = 0; i < s.size(); i++){
        k = (k * base + s[i] - 'a' + 1) % Mod;
    }
    return k;
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> s;
        h[i] = Hash(s);
    }
    sort(h + 1, h + n + 1);
    cin >> m;
    while(m--){
        cin >> x;
        long long v = Hash(x);
        int k = lower_bound(h + 1, h + n + 1, v) - h;//h[k] >= v
        if(h[k] == v) cout << "1\n";
        else cout << "0\n";

    }
}
