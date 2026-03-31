#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
int parent[MAXN];

int find_set(int x) {
    if (parent[x] != x)
        parent[x] = find_set(parent[x]);
    return parent[x];
}

void unite(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) parent[a] = b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BIN.INP", "r", stdin);
    freopen("BIN.OUT", "w", stdout);
    int P;
    cin >> P;

    for (int i = 1; i < MAXN; i++)
        parent[i] = i;

    while (P--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (Z == 1) {
            unite(X, Y);
        } else {
            cout << (find_set(X) == find_set(Y)) << '\n';
        }
    }

    return 0;
}
