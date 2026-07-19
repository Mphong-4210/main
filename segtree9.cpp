#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);

        if (it == a.end())
            a.push_back(x);
        else
            *it = x;
    }
    cout << a.size();
    return 0;
}
