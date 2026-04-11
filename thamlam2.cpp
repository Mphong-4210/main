#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long count = 0;

    if (n >= 500) {
        count += n / 500;
        n %= 500;
    }

    if (n >= 200) {
        count += n / 200;
        n %= 200;
    }

    if (n >= 100) {
        count += n / 100;
        n %= 100;
    }

    if (n >= 50) {
        count += n / 50;
        n %= 50;
    }

    if (n >= 20) {
        count += n / 20;
        n %= 20;
    }

    if (n >= 10) {
        count += n / 10;
        n %= 10;
    }

    if (n >= 5) {
        count += n / 5;
        n %= 5;
    }

    if (n >= 2) {
        count += n / 2;
        n %= 2;
    }

    if (n >= 1) {
        count += n;
    }

    cout << count;

    return 0;
}
