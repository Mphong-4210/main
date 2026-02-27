#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
const int maxn=10e6+36+69;
int a[maxn], b[maxn];



void solve(int s1, int v1, int s2, int v2) {
   if(v1==v2||(s2>s1 && v2>v1) || (s2<s1 && v2<v1)){
       cout<<-1;
   } 
   else{
       cout<<(abs(s2-s1))/(abs(v1-v2));
   }


}

int main() {
    freopen("DRB.INP", "r", stdin);
    freopen("DRB.OUT", "w", stdout);
    ll s1, s2, v1, v2;
    cin>>s1>>v1>>s2>>v2;
    solve(s1, v1, s2, v2);
}
