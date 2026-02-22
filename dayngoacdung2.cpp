#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) {
                cout << "NO";
                return 0;
            }
            char top = st.top();
            if ((c == ')' && top != '(') || (c == ']' && top != '[')) {
                cout << "NO";
                return 0;
            }
            st.pop();
        }
    }

    cout << "YES";
}
