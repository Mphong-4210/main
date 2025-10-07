#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl float

void solve(){
    string s;
    ll dem=0, sokhong=0;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            sokhong+=1;
        }
    }
    for (int i=0; i<s.size(); i++){
        dem+=int(s[i]);
    }
    if((dem%3)!=0 ||sokhong==0){
        cout<<-1;
    }
    else{
        sort(s.begin(), s.end(), greater<char>());
        cout<<s;
    }

}
int main(){
    solve();
}

