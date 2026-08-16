#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    long long sum = a + 2 * b;
    if (sum & 1) {
        cout << 0;
        return 0;
    }

    long long t = sum / 2;

    for (long long y = 0; y <= b; y++) {
        long long x = t - 2 * y;
        if (0 <= x && x <= a) {
            cout << 0;
            return 0;
        }
    }

    cout << 1;
    return 0;
}
