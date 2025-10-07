#include<bits/stdc++.h>
using namespace std;

string s;

void solve(){
    cin >> s;
    int dem = 0;
    for (int i = 0; i < s.size(); i++) {
        int count = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[i] == s[j]) count++;
        }
        if (count == 2) {
            dem++;
            for (int j = i+1; j < s.size(); j++) {
                if (s[j] == s[i]) s[j] = '#';
            }
        }
    }

    cout << dem;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
