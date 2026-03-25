#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long x;
    cin >> N >> x;
    vector<long long> p(N);
    for (int i = 0; i < N; i++) cin >> p[i];

    sort(p.begin(), p.end());

    int i = 0, j = N - 1;
    int count = 0;

    while (i <= j) {
        if (p[i] + p[j] <= x) {
            i++;
            j--;
        } else {
            j--;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}
