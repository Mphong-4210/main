#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;

    int x = 42;

    int du = n % 20;
    if (du == 0) {
        du = 20;
    }

    for (int i = 1; i <= du; i++) {
        x *= 2;
        x %= 100;
    }

    cout << x;
}
