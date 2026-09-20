#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("TLPTP.INP");
    ofstream outfile("TLPTP.OUT");

    string s;
    if (infile >> s) {
        unsigned long long result = stoull(s, nullptr, 16);
        outfile << result;
    }

    infile.close();
    outfile.close();
    return 0;
}
