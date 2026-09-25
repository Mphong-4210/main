#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(20000);
    int len = 1;
    a[0] = 1;

    for (int i = 2; i <= n; i++) {
        int carry = 0;

        for (int j = 0; j < len; j++) {
            int x = a[j] * i + carry;
            a[j] = x % 10;
            carry = x / 10;
        }

        while (carry > 0) {
            a[len] = carry % 10;
            carry /= 10;
            len++;
        }
    }

    for (int i = len - 1; i >= 0; i--)
        cout << a[i];

    return 0;
}
