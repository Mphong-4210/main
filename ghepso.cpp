#include <bits/stdc++.h>
using namespace std;

string a[105];

bool u(string x, string y) {
    return x + y > y + x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n, u);

    for (int i = 0; i < n; i++) cout << a[i];
}
