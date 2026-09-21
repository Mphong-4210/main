#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("NPBP.INP");
    ofstream outfile("NPBP.OUT");

    string s;
    if (infile >> s) {
        while (s.length() % 3 != 0) {
            s = "0" + s;
        }

        string result = "";
        for (size_t i = 0; i < s.length(); i += 3) {
            int val = (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0') * 1;
            result += to_string(val);
        }

        size_t start = result.find_first_not_of('0');
        if (start != string::npos) {
            result = result.substr(start);
        } else {
            result = "0";
        }

        outfile << result;
    }

    infile.close();
    outfile.close();
    return 0;
}
