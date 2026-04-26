#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

typedef long long ll;

const int N = 5e5 + 5;
int n, k;
ll a[N];

void solve(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];

    deque<int> dq;

    for(int i = 1; i <= n; i++){
        while(!dq.empty() && dq.front() <= i - k) dq.pop_front();

        while(!dq.empty() && a[dq.back()] >= a[i]) dq.pop_back();

        dq.push_back(i);

        if(i >= k){
            cout << a[dq.front()] << '\n';
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
