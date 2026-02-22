#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;

    for (char c : s) {
        if (c == '(') st.push(c);
        else {
            if (st.empty()) {
                cout << "No";
                return 0;
            }
            st.pop();
        }
    }

    if (st.empty()) cout << "Yes";
    else cout << "No";
}
