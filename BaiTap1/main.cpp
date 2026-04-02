#include <iostream>
#include "CNgayThangNam.h"

using namespace std;
 
int main() {
    CNgayThangNam a;
    a.Nhap();
    cout << "Ngay da nhap la: ";
    a.Xuat();
    a.NgayThangNamTiepTheo();
    cout << "Ngay tiep theo la: ";
    a.Xuat();
    return 0;
}

