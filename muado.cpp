#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<ll> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end());

    int Q;
    cin >> Q;

    while(Q--){
        ll X;
        cin >> X;

        ll res = 0;
        int l = 0, r = N - 1;

        while(l <= r){
            if(A[l] + A[r] <= X){
                res += (r - l + 1);
                l++;
            }else{
                r--;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
