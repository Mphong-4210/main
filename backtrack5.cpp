#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dem=0;
ll n, k;
vector<int> a; 
void backtrack(int x, int y) {
    if (x == k) {
        cout << "("; 
        for(int i = 0; i < a.size(); ++i) {
            cout << a[i];
            if (i != a.size() - 1) cout << ",";
        }
        cout << ")";
        cout << endl;
        dem++;
        return;
    }
    for (int i = y; i <= n - (k - x) + 1; ++i) {
        a.push_back(i);
        backtrack(x + 1, i + 1);
        a.pop_back();  
    }
}

int main() {
    cin >> n;
    cin >> k;
    backtrack(0, 1);
    cout << dem;
    return 0;
}
