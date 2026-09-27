#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream fi("M_mu_n.inp");
    ofstream fo("M_mu_n.out");

    long long M;
    int N;
    if (!(fi >> M >> N)) return 0;

    if (M == 0) {
        fo << 0 << endl;
        return 0;
    }

    vector<int> res;
    long long temp = M;
    while (temp > 0) {
        res.push_back(temp % 10);
        temp /= 10;
    }

    for (int k = 1; k < N; k++) {
        long long carry = 0;
        for (size_t j = 0; j < res.size(); j++) {
            long long prod = res[j] * M + carry;
            res[j] = prod % 10;
            carry = prod / 10;
        }
        while (carry > 0) {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }

    for (int i = (int)res.size() - 1; i >= 0; i--) {
        fo << res[i];
    }
    fo << endl;

    fi.close();
    fo.close();
    return 0;
}
