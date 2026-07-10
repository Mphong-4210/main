#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

struct HoDan {
    double x; 
    double y; 
};

double tinh_khoang_cach(HoDan a, HoDan b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main() {
    freopen("BAI5.INP", "r", stdin);
    freopen("BAI5.OUT", "w", stdout);

    int so_ho_dan;
    if (!(cin >> so_ho_dan)) return 0;

    vector<HoDan> danh_sach_ho(so_ho_dan);
    
    vector<bool> co_dien(so_ho_dan);

    for (int i = 0; i < so_ho_dan; i++) {
        int trang_thai;
        cin >> danh_sach_ho[i].x >> danh_sach_ho[i].y >> trang_thai;
        
        co_dien[i] = (trang_thai == 1);
    }

    double tong_do_dai_day = 0.0;

    for (int buoc = 0; buoc < so_ho_dan; buoc++) {
        
        double khoang_cach_ngan_nhat = 1e18;
        int ho_chua_dien_tot_nhat = -1;    

        for (int i = 0; i < so_ho_dan; i++) {
            
            if (co_dien[i] == true) { 
                
                for (int j = 0; j < so_ho_dan; j++) {
                    
                    if (co_dien[j] == false) { 
                        
                        double kc = tinh_khoang_cach(danh_sach_ho[i], danh_sach_ho[j]);
                        
                        if (kc < khoang_cach_ngan_nhat) {
                            khoang_cach_ngan_nhat = kc; 
                            ho_chua_dien_tot_nhat = j;  
                        }
                    }
                }
            }
        }

        if (ho_chua_dien_tot_nhat == -1) {
            break;
        }

        tong_do_dai_day += khoang_cach_ngan_nhat; 
        co_dien[ho_chua_dien_tot_nhat] = true;   
    }

    cout << fixed << setprecision(3) << tong_do_dai_day << "\n";

    return 0;
}
