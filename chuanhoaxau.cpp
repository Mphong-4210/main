#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    // bd
    // string chữ thường
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
    }

    // bỏ đầu
    int L = 0;
    for (; L < (int)s.size() && s[L] == ' '; ++L);
    if (L > 0) s.erase(0, L);

    // bỏ đuôi
    if (!s.empty()) {
        int R = (int)s.size() - 1;
        for (; R >= 0 && s[R] == ' '; --R);
        if (R + 1 < (int)s.size()) s.erase(R + 1);
    }

    // xóa dấu cách
    for (int i = 0; i + 1 < (int)s.size(); ++i) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            s.erase(i + 1, 1);
            --i;
        }
    }

    // khoảng trắng quanh '.' và ','
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s[i] == '.' || s[i] == ',') {
            // xóa ' ' trước dấu
            if (i > 0 && s[i - 1] == ' ') {
                s.erase(i - 1, 1);
                --i;
                continue;
            }
            //dấu cách sau ,.
            if (i + 1 < (int)s.size()) {
                if (s[i + 1] != ' ') {
                    s.insert(i + 1, 1, ' ');
                } else {
                    // xóa bớt các khoảng trắng thừa sau dấu
                    for (int j = i + 1; j + 1 < (int)s.size() && s[j + 1] == ' '; ) {
                        s.erase(j + 1, 1);
                    }
                }
            }
        }
    }

    //viết hoa '.'
    if (!s.empty() && s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s[i] == '.') {
            int j = i + 1;
            //sau dấu chấm
            for (; j < (int)s.size() && s[j] == ' '; ++j);
            if (j < (int)s.size() && s[j] >= 'a' && s[j] <= 'z') s[j] -= 32;
        }
    }

    cout << s;
}
