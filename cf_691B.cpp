#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    map<char, char> mp = {
        {'A','A'}, {'H','H'}, {'I','I'}, {'M','M'}, {'O','O'},
        {'T','T'}, {'U','U'}, {'V','V'}, {'W','W'}, {'X','X'}, {'Y','Y'},
        {'b','d'}, {'d','b'}, {'p','q'}, {'q','p'},
        {'o','o'}, {'v','v'}, {'w','w'}, {'x','x'}
    };
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if (mp.find(s[i]) == mp.end() || mp[s[i]] != s[n - 1 - i]) {
            cout << "NIE";
            return 0;
        }
    }
    cout<<"TAK";
}
