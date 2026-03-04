#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    const int N = 1000000;
    vector<bool> isPrime(N+1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= N; i++) {
        if(isPrime[i]) {
            primes.push_back(i);
            for(int j = 2*i; j <= N; j += i) isPrime[j] = false;
        }
    }

    while(q--) {
        int n;
        cin >> n;
        int temp = n;
        map<int,int> factors;

        for(int p : primes) {
            if(p*p > temp) break;
            while(temp % p == 0) {
                factors[p]++;
                temp /= p;
            }
        }
        if(temp > 1) factors[temp]++;

        for(auto it : factors) {
            cout << it.first << " " << it.second << "\n";
        }
        cout << "\n";
    }
}
