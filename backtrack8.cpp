#include <bits/stdc++.h>
using namespace std;

int n, m;
long long dem = 0;

void dfs(int i, int j) {
    if (i == n && j == m) {
        dem++;
        return;
    }
    if (i < n) dfs(i + 1, j);
    if (j < m) dfs(i, j + 1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    dfs(1, 1);
    cout << dem;
    return 0;
}
