#include <bits/stdc++.h>
using namespace std;

#define el "\n"
const int N = 1005;
int a[N][N];

int main() {
    freopen("MATRANVUONG.INP", "r", stdin);
    freopen("MATRANVUONG.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    long long tongA = 0, tongB = 0, tongC = 0, tongD = 0, tongE = 0, tongF = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) tongA += a[i][j];          
            if (i + j == n + 1) tongB += a[i][j];     
            if (i == j + 1 || i == j - 1) tongC += a[i][j]; 
            if (i + j == n || i + j == n + 2) tongD += a[i][j]; 
            if (i < j) tongE += a[i][j];                
            if (i + j > n + 1) tongF += a[i][j];    
        }
    }

    cout << tongA << el;
    cout << tongB << el;
    cout << tongC << el;
    cout << tongD << el;
    cout << tongE << el;
    cout << tongF << el;

    return 0;
}
