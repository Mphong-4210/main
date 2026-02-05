#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float

#define el "\n"
#define fi first
#define se second
#define pb push_back

const int maxn=10e6+42;
const int N=1e3;
int a[maxn], y[N][N], dem[maxn];


const int MAXA = 1e6 + 5;

int freq[MAXA];
int firstPos[MAXA];

struct Node{
    int val;
    int freq;
    int first;
};


void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];

        freq[a[i]]++;

        if(firstPos[a[i]] == 0)
            firstPos[a[i]] = i + 1;
    }

    vector<Node> v;
    for(int x = 0; x < MAXA; x++){
        if(freq[x] > 0){
            v.push_back({x, freq[x], firstPos[x]});
        }
    }

    sort(v.begin(), v.end(), [](const Node &a, const Node &b){
        if(a.freq != b.freq) return a.freq > b.freq;   
        return a.val < b.val;                   
    });

    for(auto &x : v){
        for(int i = 0; i < x.freq; i++) cout << x.val << " ";
    }
    cout << "\n";

    sort(v.begin(), v.end(), [](const Node &a, const Node &b){
        if(a.freq != b.freq) return a.freq > b.freq;
        return a.first < b.first;               
    });

    for(auto &x : v){
        for(int i = 0; i < x.freq; i++) cout << x.val << " ";
    }
    cout << "\n";

}
int main(){
       //freopen(".INP", "r", stdin);
       //freopen(".OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}