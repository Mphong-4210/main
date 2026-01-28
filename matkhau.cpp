
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

void solve(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();
    long long ans = 0;
    int cntUpper = 0, cntLower = 0, cntDigit = 0;
    int l = 0;
    for (int r = 0; r < n; ++r) {
        if (isupper(s[r])) cntUpper++;
        else if (islower(s[r])) cntLower++;
        else if (isdigit(s[r])) cntDigit++;
        while (l <= r && cntUpper > 0 && cntLower > 0 && cntDigit > 0 && (r - l + 1) > 6) {
            if (isupper(s[l])) cntUpper--;
            else if (islower(s[l])) cntLower--;
            else if (isdigit(s[l])) cntDigit--;
            l++;
        }
        if (cntUpper > 0 && cntLower > 0 && cntDigit > 0 && (r - l + 1) >= 6) {
            ans += (l + 1);
        }
    }
    cout << ans;
}
int main(){
    freopen("MATKHAU.INP", "r", stdin);
    freopen("MATKHAU.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
