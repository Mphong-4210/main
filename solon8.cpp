#include <bits/stdc++.h>
using namespace std;

string trim(string s) {
    int i = 0;
    while (i + 1 < (int)s.size() && s[i] == '0') i++;
    return s.substr(i);
}

int cmp(const string& a, const string& b) {
    if (a.size() != b.size())
        return a.size() < b.size() ? -1 : 1;
    if (a == b) return 0;
    return a < b ? -1 : 1;
}

string mulDigit(const string& a, int d) {
    if (d == 0) return "0";

    string res;
    int carry = 0;

    for (int i = a.size() - 1; i >= 0; i--) {
        int x = (a[i] - '0') * d + carry;
        res += char('0' + x % 10);
        carry = x / 10;
    }

    while (carry) {
        res += char('0' + carry % 10);
        carry /= 10;
    }

    reverse(res.begin(), res.end());
    return trim(res);
}

string subtractBig(const string& a, const string& b) {
    string res;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int borrow = 0;

    while (i >= 0) {
        int x = a[i] - '0' - borrow;
        int y = j >= 0 ? b[j] - '0' : 0;

        if (x < y) {
            x += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        res += char('0' + x - y);
        i--;
        j--;
    }

    reverse(res.begin(), res.end());
    return trim(res);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    a = trim(a);
    b = trim(b);

    string q, r = "0";

    for (char c : a) {
        if (r == "0")
            r = string(1, c);
        else
            r += c;

        r = trim(r);

        int digit = 0;

        for (int d = 9; d >= 0; d--) {
            string x = mulDigit(b, d);
            if (cmp(x, r) <= 0) {
                digit = d;
                r = subtractBig(r, x);
                break;
            }
        }

        q += char('0' + digit);
    }

    cout << trim(q) << '\n';
    cout << r << '\n';

    return 0;
}
