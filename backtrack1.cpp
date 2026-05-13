#include <bits/stdc++.h>
using namespace std;
void backtrack(int x, string s, int n) {
    if (x == n) {
        cout << s << endl;
        return;
    }
    s[x] = '0';
    backtrack(x + 1, s, n); 
    s[x] = '1';
    backtrack(x + 1, s, n); 
}
int main() {
    int n, m;
    cin >> n >>m;
    for(int i=n; i<=m; i++){
        if (n > 0) {
            string s(n, '0');
            backtrack(0, s, n); 
        } else {
            cout << endl; 
        }
    }
    return 0;
}
