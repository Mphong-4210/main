#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long k) {
    while (true) {
        long long mid = 1LL << (n - 1);

        if (k == mid) return n;

        if (k > mid)
            k -= mid;

        n--;
    }
}

int main() {
    long long n, k;
    cin >> n >> k;

    cout << solve(n, k);

    return 0;
}
