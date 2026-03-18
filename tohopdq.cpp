#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> cur;

void gen(int st){
    if((int)cur.size() == k){
        for(int i = 0; i < k; i++){
            if(i) cout << " ";
            cout << cur[i];
        }
        cout << "\n";
        return;
    }
    for(int i = st; i <= n; i++){
        cur.push_back(i);
        gen(i+1);
        cur.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    gen(1);
    return 0;
}
