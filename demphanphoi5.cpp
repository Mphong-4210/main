#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int khong=0, mot=0, hai=0, ba=0, bon=0, nam=0, sau=0, bay=0, tam=0, chin=0;

    for(int i=0; i<s.size(); ++i){
        if(s[i]=='0'){
            khong+=1;
        }
        if(s[i]=='9'){
            chin+=1;
        }
        if(s[i]=='8'){
            tam+=1;
        }
        if(s[i]=='7'){
            bay+=1;
        }
        if(s[i]=='6'){
            sau+=1;
        }
        if(s[i]=='5'){
            nam+=1;
        }
        if(s[i]=='4'){
            bon+=1;
        }
        if(s[i]=='3'){
            ba+=1;
        }
        if(s[i]=='2'){
            hai+=1;
        }
        if(s[i]=='1'){
            mot+=1;
        }
    }
    cout<<khong<<endl;
    cout<<mot<<endl;
    cout<<hai<<endl;
    cout<<ba<<endl;
    cout<<bon<<endl;
    cout<<nam<<endl;
    cout<<sau<<endl;
    cout<<bay<<endl;
    cout<<tam<<endl;
    cout<<chin;

}
