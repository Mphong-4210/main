
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float
#define str string
#define ldb long double
#define vll vector<ll>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define dq deque<ll>
#define bend(x) (x).begin(), (x).end()
#define ret return
#define el '\n'
#define si size()
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define FOR(i,a,b) for(int i=(a); i<=(b); i++)
#define FORN(i,a,b) for(int i=(a); i>=(b); i--)
// Phong

void manhphong(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void ffopen(string name){
    string infile=name + ".inp";
    string outfile=name + ".out";
    if(FILE* f = fopen(infile.c_str(), "r")){
        fclose(f);
        freopen(infile.c_str(), "r", stdin);
        freopen(outfile.c_str(), "w", stdout);
    }
}

void solve(){
    string s;
    cin>>s;
    vector<int>dem(26, 0);
    int xh = 0;
        
    for(char c:s){
        dem[c-'a']++;
        if(dem[c-'a']>xh){
            xh=dem[c-'a'];
        }
    }
    int n=s.size();
    
    if(xh<=(n+1)/2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main(){
    //ffopen("filename");
    manhphong();
    solve();
}

/*
   ____  _                             
  |  _ \| |__   ___  _ __   __ _ 
  | |_) | '_ \ / _ \| '_ \ / _` |
  |  __/| | | | (_) | | | | (_| |
  |_|   |_| |_|\___/|_| |_|\__, |
                           |___/                           
*/
