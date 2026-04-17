#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    if (n % 3 != 0) {
        cout << -1;
        return 0;
    }

    for (long long b = n / 9; b >= 0; b--) {
        long long rem = n - 9 * b;
        if (rem % 6 == 0) {
            long long a = rem / 6;
            for (int i = 0; i < a; i++) cout << 6;
            for (int i = 0; i < b; i++) cout << 9;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
