  
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")

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
#define ret return
#define el '\n'
#define si size()
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define bend(x) (x).begin(), (x).end()
#define FOR(i,a,b) for(int i=(a); i<=(b); i++)
#define FORN(i,a,b) for(int i=(a); i>=(b); i--)
// Phong
 
const ll INF = 1e18, NINF = -1e18;
const int MAXN=1e6+42, N=1e3, MOD=1000000007;
const int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1};
ll a[MAXN], dem[MAXN], y[N][N], pre[MAXN];
 
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
 
ll dp[12][820][2];
str s;
int target, L;

ll f(int pos, int sum, int bigger){
    if(sum > target){
        ret 0;
    }
    if(pos == L){
        ret (sum == target);
    }

    ll &res = dp[pos][sum][bigger];

    if(res != -1){
        ret res;
    }
    res = 0;

    int low = bigger ? 0 : s[pos] - '0';

    for(int d = low; d <= 9; d++){
        if(f(pos+1,sum+d*d,bigger|(d>low))){
            res = 1;
            break;
        }
    }
    ret res;
}

str build_same(str bound){
    s = bound;
    L = s.size();

    memset(dp, -1, sizeof(dp));
    if(!f(0, 0, 0)) ret "";

    str ans;
    int sum = 0, bigger = 0;

    for(int pos = 0; pos < L; pos++){
        int low = bigger ? 0 : s[pos] - '0';
        
        for(int d = low; d <= 9; d++){
            if(f(pos+1, sum+d*d, bigger|(d>low))){
                ans += char('0' + d);
                sum += d * d;
                bigger |= (d > low);
                break;
            }
        }
    }
    
    ret ans;
}

str build_len(int len){
    L = len;
    s = str(len, '0');
    s[0] = '1';

    memset(dp, -1, sizeof(dp));
    if(!f(0, 0, 0)) ret "";

    str ans;
    int sum = 0, bigger = 0;

    for(int pos = 0; pos < L; pos++){
        int low = bigger ? 0 : s[pos] - '0';

        for(int d = low; d <= 9; d++){
            if(f(pos+1,sum+d*d,bigger|(d>low))){
                ans += char('0' + d);
                sum += d * d;
                bigger |= (d > low);
                break;
                if(sum>=bigger){
                    d+=2;
                }
            }
        }
    }

    ret ans;
}

void solve(){
    ll n;
    cin >> n;

    str bound = to_string(n + 1);

    vector<int> prime;
    vector<int> isPrime(811, 1);
    isPrime[0] = isPrime[1] = 0;

    for(int i = 2; i * i <= 810; i++){
        if(isPrime[i]){
            for(int j=i*i; j<=810; j+=i){
                isPrime[j] = 0;
            }
        }
    }

    for(int i = 2; i <= 810; i++){
        if(isPrime[i]) prime.push_back(i);
    }

    str best = "";

    for(int p : prime){
        target = p;
        str cur = build_same(bound);

        if(cur != ""){
            if(best==""||cur.size()<best.size()|| 
            (cur.size()==best.size()&&cur<best)){
                best=cur;
            }
        }
    }

    if(best != ""){
        cout << best;
        ret;
    }

    int len = bound.size() + 1;

    while(true){
        best = "";

        for(int p : prime){
            target = p;
            str cur = build_len(len);
            if(cur != ""){
                if(best == "" || cur<best){
                    best = cur;
                }
            }
        }

        if(best != ""){
            cout << best;
            ret;
        }

        len++;
    }
}
 
int main(){
    //ffopen("filename");
    manhphong();
    solve();
    ret 0;
}
 
/*
   ____  _                             
  |  _ \| |__   ___  _ __   __ _ 
  | |_) | '_ \ / _ \| '_ \ / _` |
  |  __/| | | | (_) | | | | (_| |
  |_|   |_| |_|\___/|_| |_|\__, |
                           |___/                           
*/
