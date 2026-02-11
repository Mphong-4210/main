#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TINHTONG.INP", "r", stdin);
    freopen("TINHTONG.OUT", "w", stdout);

    string s;
    getline(cin, s);   

    long long tong = 0;
    string so = "";    

    for (char c : s) {
        if (isdigit(c)) {
            so += c;   
        } else {
            if (!so.empty()) {        
                tong += stoll(so);    
                so = "";              
            }
        }
    }
    if (!so.empty()) tong += stoll(so);

    cout << tong;
}
