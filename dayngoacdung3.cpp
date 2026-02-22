#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<int> st;
    vector<int> ans(s.size() + 1, 0);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[')
            st.push(i + 1);
        else {
            if (st.empty()) {
                cout << -1;
                return 0;
            }
            int j = st.top();
            st.pop();

            if ((s[i] == ')' && s[j - 1] != '(') || (s[i] == ']' && s[j - 1] != '[')) {
                cout << -1;
                return 0;
            }

            ans[i + 1] = j;
            ans[j] = i + 1;
        }
    }

    if (!st.empty()) {
        cout << -1;
        return 0;
    }

    for (int i = 1; i <= s.size(); i++)
        cout << ans[i] << " ";
}
