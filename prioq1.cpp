#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define str string

void solve(){
    str s; cin >> s;
    int sum = 0, ok = 0;
    for(char c : s){
        sum += c - '0';
        if(c == '0') ok = 1;
    }
    if(!ok || sum % 3){
        cout << -1;
        return;
    }
    sort(s.rbegin(), s.rend());
    cout << s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
