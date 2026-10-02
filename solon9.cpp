#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compareLE(const string& a, const string& b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    return a <= b;
}

string addBigInt(const string& a, const string& b) {
    string res = "";
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        carry = sum / 10;
        res.push_back((sum % 10) + '0');
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ifstream fin("DEMFIBO.INP");
    ofstream fout("DEMFIBO.OUT");

    string A, B;
    if (!(fin >> A >> B)) {
        if (!(cin >> A >> B)) return 0;
    }

    vector<string> fibo;
    fibo.push_back("1");
    fibo.push_back("1");

    while (true) {
        string next_fib = addBigInt(fibo[fibo.size() - 1], fibo[fibo.size() - 2]);
        if (!compareLE(next_fib, B)) {
            break;
        }
        fibo.push_back(next_fib);
    }

    int count = 0;
    for (const string& f : fibo) {
        if (compareLE(A, f) && compareLE(f, B)) {
            count++;
        }
    }

    if (fout.is_open()) {
        fout << count << "\n";
    } else {
        cout << count << "\n";
    }

    return 0;
}
