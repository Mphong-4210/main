#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K;
    string S;
    cin >> K >> S;
    unordered_map<char, int> freq;
    for (char c : S) {
        freq[c]++;
    }
    priority_queue<int> pq;
    for (auto &p : freq) {
        pq.push(p.second);
    }
    while (K-- && !pq.empty()) {
        int top = pq.top();
        pq.pop();
        top--;

        if (top > 0) pq.push(top);
    }
    long long result = 0;
    while (!pq.empty()) {
        long long x = pq.top();
        pq.pop();
        result += x * x;
    }

    cout << result << "\n";
    return 0;
}
