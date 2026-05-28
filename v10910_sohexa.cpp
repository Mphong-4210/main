#include <bits/stdc++.h>
using namespace std;

string toHex(long long x) {
    string s = "";
    while (x > 0) {
        int d = x % 16;
        if (d < 10) s += char('0' + d);
        else s += char('A' + d - 10);
        x /= 16;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main() {
    freopen("HEXA.INP", "r", stdin);
    freopen("HEXA.OUT", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    n--;

    long long len = 1;
    long long start = 1;

    while (true) {
        long long cnt = 15LL * start;
        __int128 block = (__int128)cnt * len;

        if (n >= block) {
            n -= block;
            len++;
            start *= 16;
        } else break;
    }

    long long idx = n / len;
    int pos = n % len;

    long long num = start + idx;

    string s = "";
    long long x = num;
    while (x > 0) {
        int d = x % 16;
        s += (d < 10 ? char('0' + d) : char('A' + d - 10));
        x /= 16;
    }
    reverse(s.begin(), s.end());

    cout << s[pos];
}
