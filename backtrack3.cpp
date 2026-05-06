#include <bits/stdc++.h>
using namespace std;
int n; 
vector<int> v; 
vector<bool> check; 
void kq() {
    for (int c : v) {
        cout << c << " ";
    }
    cout << endl;
}
void backtrack(int x) {
    if (x == n) {
        kq();
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (!check[i]) {
            v.push_back(i);
            check[i] = true;   
            backtrack(x + 1);
            check[i] = false;
            v.pop_back();
        }
    }
}
int main() {
        ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        check.push_back(false);
    }
    backtrack(0); 
    return 0;
}
