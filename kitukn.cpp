#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("KITUKN.INP", "r", stdin);
    freopen("KITUKN.OUT", "w", stdout);
    string S;
    getline(cin, S);
    int freq[36] = {0};

    for (char ch : S) {
        if (isalpha((unsigned char)ch)) {
            char c = tolower((unsigned char)ch);
            freq[c - 'a']++;
        } else if (isdigit((unsigned char)ch)) {
            freq[26 + (ch - '0')]++;
        }    }
    int distinct = 0;
    for (int i = 0; i < 36; ++i)
        if (freq[i] > 0) ++distinct;

    cout << distinct << '\n';
    return 0;
}
