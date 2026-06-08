#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool isPrime(long long x) {
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

bool check(long long x) {
    if (x == 1) return true;       
    if (x == 4) return false;   
    return !isPrime(x);            
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ifstream fin("BAI3.INP");
    ofstream fout("BAI3.OUT");

    int n;
    if (fin >> n) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            fin >> a;
            if (check(a)) {
                count++;
            }
        }
        fout << count << "\n";
    }

    fin.close();
    fout.close();
    return 0;
}
