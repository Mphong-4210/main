#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

string formatWord(string word) {
    if (word.empty()) return "";
    word[0] = toupper(word[0]);
    for (size_t i = 1; i < word.length(); ++i) {
        word[i] = tolower(word[i]);
    }
    return word;
}

int main() {
    ifstream infile("CHUANHOA.INP");
    ofstream outfile("CHUANHOA.OUT");

    string line;
    if (getline(infile, line)) {
        stringstream ss(line);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(formatWord(word));
        }

        for (size_t i = 0; i < words.size(); ++i) {
            outfile << words[i];
            if (i < words.size() - 1) {
                outfile << " ";
            }
        }
    }

    infile.close();
    outfile.close();
    return 0;
}
