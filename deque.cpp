#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    int Q; 
    cin >> Q;
    
    while (Q--) {
        int type; 
        cin >> type;
        
        if (type == 0) {
            int t, x;
            cin >> t >> x;
            if (t == 0) dq.push_front(x);
            else dq.push_back(x);
        } 
        else if (type == 1) {
            int x;
            cin >> x;
            cout << dq[x] << "\n";
        } 
        else if (type == 2) {
            int t;
            cin >> t;
            if (t == 0) dq.pop_front();
            else dq.pop_back();
        }
    }
    return 0;
}
