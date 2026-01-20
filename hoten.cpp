#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TACHHDT.INP", "r", stdin);
    freopen("TACHHDT.OUT", "w", stdout);
    string s;
    getline(cin, s);

    int n = s.size();

    int i = 0;
    while (i < n && s[i] != ' ') {
        cout << s[i];
        i++;
    }
    cout << endl;

    int lastSpace = -1;
    for (int j = 0; j < n; j++) {
        if (s[j] == ' ') lastSpace = j;
    }

    i++;
    while (i < lastSpace) {
        cout << s[i];
        i++;
    }
    cout << endl;

    for (int j = lastSpace + 1; j < n; j++) {
        cout << s[j];
    }
}
