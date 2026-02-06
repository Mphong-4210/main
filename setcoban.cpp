
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


void solve(){
    int N;
    cin >> N;

    multiset<int> ms;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int Q;
    cin >> Q;
    while (Q--){
        int type, x;
        cin >> type;

        if (type == 1) { 
            cin >> x;
            ms.insert(x);
        }

        else if (type == 2) { 
            cin >> x;
            ms.erase(x);   // xóa toàn bộ x
        }

        else if (type == 3) { 
            cin >> x;
            auto it = ms.upper_bound(x);
            if (it == ms.end()) cout << "No\n";
            else cout << *it << "\n";
        }

        else if (type == 4) { 
            cin >> x;
            auto it = ms.lower_bound(x);
            if (it == ms.begin()) cout << "No\n";
            else {
                it--;
                cout << *it << "\n";
            }
        }

        else if (type == 5) {
            if (ms.empty()) cout << "No\n"; 
            else {
                cout << *ms.begin() << " " << *ms.rbegin() << "\n";
            }
        }
    }     
}
int main(){
       freopen("SEQ.INP", "r", stdin);
       freopen("SEQ.OUT", "w", stdout);
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       solve();
}