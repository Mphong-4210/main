#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

struct Matrix {
    int n;
    vector<vector<long long>> a;

    Matrix(int _n) {
        n = _n;
        a.assign(n, vector<long long>(n, 0));
    }

    // Ma trận đơn vị
    static Matrix identity(int n) {
        Matrix I(n);
        for (int i = 0; i < n; i++)
            I.a[i][i] = 1;
        return I;
    }

    Matrix operator * (const Matrix &other) const {
        Matrix res(n);

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (a[i][k] == 0) continue;

                for (int j = 0; j < n; j++) {
                    res.a[i][j] =
                        (res.a[i][j] + a[i][k] * other.a[k][j]) % MOD;
                }
            }
        }

        return res;
    }
};

Matrix power(Matrix base, long long exp) {
    Matrix res = Matrix::identity(base.n);

    while (exp > 0) {
        if (exp & 1)
            res = res * base;

        base = base * base;
        exp >>= 1;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long K;
    cin >> N >> K;

    Matrix A(N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A.a[i][j];
        }
    }

    Matrix AK = power(A, K);

    long long ans = 0;

    for (int i = 0; i < N; i++) {
        ans = (ans + AK.a[i][N - 1]) % MOD;
    }

    cout << ans << '\n';

    return 0;
}
