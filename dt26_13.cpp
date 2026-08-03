#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c, r;
    cin >> a >> b >> c >> r;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "No";
        return 0;
    }

    double p = (a + b + c) / 2.0;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    double rin = S / p;

    if (rin + 1e-9 >= r)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
