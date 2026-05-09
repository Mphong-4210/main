#include <bits/stdc++.h>
using namespace std;

int n;
int a[15][15];
string s;
bool ok = false;
void dfs(int i, int j) {
    if (i == n && j == n) {
        cout << s << '\n';
        ok = true;
        return;
    }
    if (i + 1 <= n && a[i + 1][j] == 1) {
        s.push_back('D');
        dfs(i + 1, j);
        s.pop_back();
    }
    if (j + 1 <= n && a[i][j + 1] == 1) {
        s.push_back('R');
        dfs(i, j + 1);
        s.pop_back();
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    if (a[n][n] == 0) {
        cout << -1;
        return 0;
    }
    dfs(1, 1);
    if (!ok) cout << -1;
    return 0;
}
