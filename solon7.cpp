#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    unsigned long long b;
    cin >> a >> b;

    string ans;
    unsigned long long rem = 0;

    for (char c : a) {
        __int128 cur = (__int128)rem * 10 + (c - '0');

        unsigned long long digit = (unsigned long long)(cur / b);
        rem = (unsigned long long)(cur % b);

        if (!ans.empty() || digit != 0)
            ans.push_back(char('0' + digit));
    }

    if (ans.empty())
        ans = "0";

    cout << ans << '\n';
    cout << rem << '\n';

    return 0;
}
