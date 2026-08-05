#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long k;
    cin>>n>>k;
    vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> id(n);
    iota(id.begin(), id.end(), 0);
    sort(id.begin(), id.end(), [&](int a, int b) {
        if (h[a] != h[b]) return h[a] > h[b];
        return a < b;
    });
    vector<int> L(n), R(n);
    for (int i = 0; i < n; i++) {
        L[i] = i - 1;
        R[i] = i + 1;
    }
    vector<bool> al(n, true);
    int kq = 0; 
    for (int u : id) {
        if (!al[u]) continue; 
        kq++; 
        vector<int> A;
        int cur = u;
        for (int step = 0; step < 3; step++) {
            if (cur < n) {
                A.push_back(cur);
                cur = R[cur];
            }
        }
        int i = 1;
        while (true) {
            if (i + 1 >= A.size()) break;
            if (v[A[i + 1]] - v[A[i - 1]] > k) break;
            
            i++;
            if (cur < n) {
                A.push_back(cur);
                cur = R[cur];
            }
        }
        for (int j = 0; j < i; j++) {
            int x = A[j];
            if (L[x] >= 0) R[L[x]] = R[x];
            if (R[x] < n)  L[R[x]] = L[x];
            al[x] = false;
        }
    }
    cout << kq << "\n";
    return 0;
}
