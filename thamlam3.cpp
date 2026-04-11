#include <bits/stdc++.h>
using namespace std;

string toMin(string s) {
    for (char &c : s) {
        if (c == '8') c = '3';
    }
    return s;
}

string toMax(string s) {
    for (char &c : s) {
        if (c == '3') c = '8';
    }
    return s;
}

string add(string a, string b) {
    string res;
    int i = (int)a.size() - 1, j = (int)b.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int x = i >= 0 ? a[i--] - '0' : 0;
        int y = j >= 0 ? b[j--] - '0' : 0;
        int sum = x + y + carry;
        res.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string A, B;
    cin >> A >> B;

    string maxSum = add(toMax(A), toMax(B));
    string minSum = add(toMin(A), toMin(B));

    cout << maxSum << " " << minSum << "\n";
}
