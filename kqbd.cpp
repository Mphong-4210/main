#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("KQBONGDA.INP", "r", stdin);
    freopen("KQBONGDA.OUT", "w", stdout);

    int n;
    cin >> n;
    int a[105][105];  

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int tong[105] = {0}, thang[105] = {0}, hoa[105] = {0}, thua[105] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tong[i] += a[i][j];
            if (i == j) continue;
            if (a[i][j] == 3) thang[i]++;
            else if (a[i][j] == 1) hoa[i]++;
            else thua[i]++;
        }
    }

    
    int mx = tong[0];
    for (int i = 1; i < n; i++)
        if (tong[i] > mx) mx = tong[i];

    for (int i = 0; i < n; i++) {
        if (tong[i] == mx)
            cout << i + 1 << " " << tong[i] << " " << thang[i] << " " << hoa[i] << " " << thua[i] << "\n";
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (thang[i] > thua[i]) {
            cout << i + 1 << " ";
            found = true;
        }
    }
    if (!found) cout << 0;
    cout << "\n";

    found = false;
    for (int i = 0; i < n; i++) {
        if (thua[i] == 0) {
            cout << i + 1 << " ";
            found = true;
        }
    }
    if (!found) cout << 0;
    cout << "\n";

    return 0;
}