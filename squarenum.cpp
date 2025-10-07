#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, dem=0;
    cin>>n;
    string s = to_string(n);

    for(int i=0; i<s.size(); i++){
        if(s[i]==1||s[i]==4||s[i]==9){
            dem+=1;
        }
    }
    cout<<dem;
}
