#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream fi("Hai_mu_n.inp");
    ofstream fo("Hai_mu_n.out");

    int n;
    if (!(fi >> n)) return 0;

    vector<int> res;
    res.push_back(1);

    for (int i = 0; i < n; i++) {
        int carry = 0;
        for (size_t j = 0; j < res.size(); j++) {
            int prod = res[j] * 2 + carry;
            res[j] = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
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
