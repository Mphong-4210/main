#include <bits/stdc++.h>
using namespace std;

void ffopen(string name){
    string infile=name + ".inp";
    string outfile=name + ".out";
    if(FILE* f = fopen(infile.c_str(), "r")){
        fclose(f);
        freopen(infile.c_str(), "r", stdin);
        freopen(outfile.c_str(), "w", stdout);
    }
}

int main() {
    ffopen("Bai3");
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;

    vector<int> f(1000001, 0);
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (s >= x) ans += f[s - x];
        f[x]++;
    }

    cout << ans;
    return 0;
}
