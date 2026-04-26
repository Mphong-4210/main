#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

typedef long long ll;

const int N = 1e6 + 5;
int n;
ll d, a[N];

void solve(){
    cin >> n >> d;
    for(int i = 0; i < n; i++) cin >> a[i];

    deque<int> dqMin, dqMax;
    int l = 0;
    int res = 0;

    for(int r = 0; r < n; r++){
        while(!dqMin.empty() && a[dqMin.back()] >= a[r]) dqMin.pop_back();
        dqMin.push_back(r);

        while(!dqMax.empty() && a[dqMax.back()] <= a[r]) dqMax.pop_back();
        dqMax.push_back(r);

        while(a[dqMax.front()] - a[dqMin.front()] > d){
            if(dqMin.front() == l) dqMin.pop_front();
            if(dqMax.front() == l) dqMax.pop_front();
            l++;
        }

        res = max(res, r - l + 1);
    }

    cout << res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
