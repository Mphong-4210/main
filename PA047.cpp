#include <bits/stdc++.h>
using namespace std;

bool nto[2000005];

void sang(int n) {
    for (int i = 2; i <= n; i++) nto[i] = true;
    for (int i = 2; i * i <= n; i++) {
        if (nto[i]) {
            for (int j = i * i; j <= n; j += i) {
                nto[j] = false;
            }
        }
    }
}

int dao_so(int x) {
    int r = 0;
    while (x > 0) {
        r = r * 10 + x % 10;
        x /= 10;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    sang(n);

    for (int i = 2; i <= n; i++) {
        if (nto[i]) {
            cout<<i<<endl;
        }
    }

    return 0;
}
