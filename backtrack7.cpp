#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> A;
int b[25];

void backtrack(int idx, int pos, int sum) {
    if (sum == K) {
        cout << "[";
        for (int i = 0; i < pos; i++) {
            cout << b[i];
            if (i + 1 < pos) cout << " ";
        }
        cout << "]\n";
        return;
    }
    if (idx == N || sum > K) return;
    b[pos] = A[idx];
    backtrack(idx + 1, pos + 1, sum + A[idx]);
    backtrack(idx + 1, pos, sum);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> K;
    A.resize(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end());
    backtrack(0, 0, 0);
    return 0;
}
