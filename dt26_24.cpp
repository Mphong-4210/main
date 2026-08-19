#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s;
    cin >> s;

    ll v = 0, c = 0;

    for(char x : s){
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            v++;
        else
            c++;
    }

    cout << v * c;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
