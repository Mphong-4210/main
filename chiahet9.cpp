#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    if (!(cin >> s)) return;

    int sum = 0;
    for (char c : s) {
        sum += (c - '0');
    }

    int rem = sum % 9;

    for (int i = 0; i < s.length(); ++i) {
        int d = s[i] - '0';
        int target = (d - rem % 9 + 9) % 9;
        
        if (target < d) {
            s[i] = target + '0';
            break;
        }
    }

    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("CH9.INP", "r", stdin);
    freopen("CH9.OUT", "w", stdout);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}
