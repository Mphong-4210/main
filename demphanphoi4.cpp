#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    if(s1.size() != s2.size()){ 
        cout << "NO";
        return 0;
    }

    int cnt1[256] = {0}, cnt2[256] = {0};

    for(int i=0; i<s1.size(); i++){
        cnt1[s1[i]]++;
    }
    for(int i=0; i<s2.size(); i++){
        cnt2[s2[i]]++;
    }

    for(int c=0; c<256; c++){
        if(cnt1[c] != cnt2[c]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
