#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i*i <= N; i++) {
        if(isPrime[i]) {
            for(int j = i*i; j <= N; j += i)
                isPrime[j] = false;
        }
    }

    for(int i = 2; i+2 <N; i++) {
        if(isPrime[i] && isPrime[i+2])
            cout << i << " " << i+2 << "\n";
    }
}
