#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fl float
#define el "\n"
#define ull unsigned long long
#define fi first
#define se second

const int maxn=10e6+42;
const int N=1e3;
int a[maxn], y[N][N], dem[10];
deque<int> dq;

void solve(){
   string s;
   getline(cin, s);
   for(int i=0; i<s.size(); i++){
      if(isupper(s[i])){
         s[i] = tolower(s[i]);
      }
      if(s[i]==' '&& s[i+1]==' '){
         s.erase(i+1, 1);
         i--;
      }
   }
   char c=toupper(s[0]);
   cout<<c;
   for(int i=1; i<s.size(); ++i){
      if(s[i-1]==' '){
         char x=toupper(s[i]);
            cout<<x;
      }
      else{
         cout<<s[i];
      }
   }
}
int main(){
   freopen("CHUANHOA.INP", "r", stdin);
   freopen("CHUANHOA.OUT", "w", stdout);
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   solve();
}