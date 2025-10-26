#include <string>
using namespace std;

// Chuyển chuỗi ngày "dd/mm/yyyy" thành 3 số
void tachNgay(const string &ngay, int &d, int &m, int &y) {
    if (ngay.size() < 10) { d = m = y = 0; return; }
    d = stoi(ngay.substr(0, 2));
    m = stoi(ngay.substr(3, 2));
    y = stoi(ngay.substr(6, 4));
}

// Trả về true nếu ngay1 < ngay2
bool truocNgay(const string &ngay1, const string &ngay2) {
    int d1, m1, y1, d2, m2, y2;
    tachNgay(ngay1, d1, m1, y1);
    tachNgay(ngay2, d2, m2, y2);
    if (y1 != y2) return y1 < y2;
    if (m1 != m2) return m1 < m2;
    return d1 < d2;
}
