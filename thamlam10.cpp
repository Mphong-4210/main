#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXN = 100005;

int parent[MAXN];

int find_set(int v){
    if(v == parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}

void union_set(int u, int v){
    u = find_set(u);
    v = find_set(v);
    parent[u] = v;
}

struct Job{
    int id, t, g;
};

bool cmp(Job a, Job b){
    return a.g > b.g;
}

void solve(){
    int n; cin >> n;
    vector<Job> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i].id >> a[i].t >> a[i].g;
    }

    sort(a.begin(), a.end(), cmp);

    for(int i = 0; i <= n; i++) parent[i] = i;

    ll res = 0;

    for(auto job : a){
        int slot = find_set(job.t);
        if(slot > 0){
            res += job.g;
            union_set(slot, slot - 1);
        }
    }

    cout << res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
