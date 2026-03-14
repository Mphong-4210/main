#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    long long k;
    cin>>s>>k;

    long long a=(s[0]-'0')*10+(s[1]-'0');
    long long b=s[2]-'A';
    long long c=0;

    for(int i=3;i<10;i++) c=c*10+(s[i]-'0');

    c+=k;
    b+=c/10000000;
    c%=10000000;

    a+=b/26;
    b%=26;

    cout<<a/10<<a%10;
    cout<<char('A'+b);
    cout<<c/1000000;
    c%=1000000;
    cout<<c/100000;
    c%=100000;
    cout<<c/10000;
    c%=10000;
    cout<<c/1000;
    c%=1000;
    cout<<c/100;
    c%=100;
    cout<<c/10;
    cout<<c%10;

    return 0;
}
