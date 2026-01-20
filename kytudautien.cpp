#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("XUATHIENDT.INP", "r", stdin);
    freopen("XUATHIENDT.OUT", "w", stdout);

    int T; 
    cin >> T;
    while (T--) {
        string s; 
        cin >> s;
        int cnt[256] = {0};

        for (char c : s) cnt[c]++;

        int pos = -1;
        for (int i = 0; i < s.size(); i++) {
            if (cnt[s[i]] == 1) {
                pos = i + 1;
                break;
            }
        }
        cout << pos << endl;
    }
    return 0;
}
