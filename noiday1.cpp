#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if(n==1){
            cout<<x;
            return 0;
        }
            pq.push(x);
        }
        

        long long total = 0;
        while (pq.size() > 1) {
            long long a = pq.top(); pq.pop();
            long long b = pq.top(); pq.pop();
            total += a + b;
            pq.push(a + b);
        }
    
        cout << total << endl;
        return 0;
}
