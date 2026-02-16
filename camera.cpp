#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int soMayTinh;
    cin >> soMayTinh;

    static int toaDo[1000005];
    for (int i = 0; i < soMayTinh; ++i)
        cin >> toaDo[i];

    sort(toaDo, toaDo + soMayTinh);

    if (soMayTinh % 2 == 1) {

        int trungVi = toaDo[soMayTinh / 2];
        cout << 1 << '\n' << trungVi << '\n';
    } else {

        int trai = toaDo[soMayTinh / 2 - 1];
        int phai = toaDo[soMayTinh / 2];
        int soViTri = phai - trai + 1;

        cout << soViTri << '\n';
        for (int x = trai; x <= phai; ++x) {
            if (x != trai) cout << ' ';
            cout << x;
        }
        cout << '\n';
    }

    return 0;
}
