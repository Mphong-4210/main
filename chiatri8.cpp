#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

struct Matrix {
    long long a[2][2];

    Matrix() {
        a[0][0] = a[0][1] = a[1][0] = a[1][1] = 0;
    }
};

Matrix multiply(Matrix x, Matrix y) {
    Matrix res;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                res.a[i][j] += x.a[i][k] * y.a[k][j];
                res.a[i][j] %= MOD;
            }
        }
    }

    return res;
}

Matrix power(Matrix base, long long n) {
    Matrix res;

    // ma trận đơn vị
    res.a[0][0] = res.a[1][1] = 1;

    while(n > 0) {
        if(n % 2 == 1)
            res = multiply(res, base);

        base = multiply(base, base);
        n /= 2;
    }

    return res;
}

int main() {
    long long n;
    cin >> n;

    if(n == 0) {
        cout << 0;
        return 0;
    }

    Matrix A;
    A.a[0][0] = 1;
    A.a[0][1] = 1;
    A.a[1][0] = 1;
    A.a[1][1] = 0;

    Matrix ans = power(A, n - 1);

    cout << ans.a[0][0];

    return 0;
}
