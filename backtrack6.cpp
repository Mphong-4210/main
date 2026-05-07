#include <bits/stdc++.h>
using namespace std;

int N, K, S;
int res = 0;
vector<int> a;

void backtrack(int pos, int last, int sum) {
    if (pos == K) {
        if (sum == S) res++;
        return;
    }
    for (int i = last + 1; i <= N; i++) {
        if (sum + i > S) break;
        a[pos] = i;
        backtrack(pos + 1, i, sum + i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> K >> S;
    a.resize(K);
    backtrack(0, 0, 0);
    cout << res;
    return 0;
}
