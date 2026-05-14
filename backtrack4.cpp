#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n; 
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
    for (int i = n; i >= 1; --i) {
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
    cin >> n;
    for(int i = 0; i <= n; ++i) {
        check.push_back(false);
    }
    backtrack(0); 
    return 0;
}
