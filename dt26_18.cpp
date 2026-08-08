#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> mp;
    ll ans = 0;

    while (n--) {
        string s;
        cin >> s;

        for (int keep = 0; keep < 3; keep++) {
            string t = s;
            int x = (keep + 1) % 3;
            int y = (keep + 2) % 3;

            for (char c1 = 'a'; c1 <= 'j'; c1++) {
                for (char c2 = 'a'; c2 <= 'j'; c2++) {
                    t = s;
                    t[x] = c1;
                    t[y] = c2;
                    ans += mp[t];
                }
            }
        }

        mp[s]++;
    }

    cout << ans;
    return 0;
}
