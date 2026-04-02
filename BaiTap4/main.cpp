#include <iostream>
#include "CGioPhutGiay.h"

using namespace std;

int main() {
    CGioPhutGiay a;
    a.Nhap();
    cout << "\nThoi gian da nhap la (Gio:Phut:Giay): ";
    a.Xuat();

    a.TinhCongThemMotGiay();
    cout << "\nThoi gian sau khi cong mot giay la: ";
    a.Xuat();
    
}
