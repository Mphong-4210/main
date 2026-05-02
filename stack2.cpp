#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

typedef long long ll;

bool check(string s){
    stack<char> st;
    for(char c : s){
        if(c=='(' || c=='[' || c=='{') st.push(c);
        else{
            if(st.empty()) return false;
            char t = st.top(); st.pop();
            if(c==')' && t!='(') return false;
            if(c==']' && t!='[') return false;
            if(c=='}' && t!='{') return false;
        }
    }
    return st.empty();
}

void solve(){
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        cout << (check(s) ? "YES\n" : "NO\n");
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
