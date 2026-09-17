#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ifstream fin("TINHTONG.INP");
    ofstream fout("TINHTONG.OUT");

    string s;
    if (getline(fin, s)) {
        long long total_sum = 0;
        long long current_num = 0;
        bool in_number = false;

        for (char c : s) {
            if (isdigit(c)) {
                current_num = current_num * 10 + (c - '0');
                in_number = true;
            } else {
                if (in_number) {
                    total_sum += current_num;
                    current_num = 0;
                    in_number = false;
                }
            }
        }

        if (in_number) {
            total_sum += current_num;
        }

        fout << total_sum << endl;
    }

    fin.close();
    fout.close();
    return 0;
}
