#include <iostream>
#include "CSoPhuc.h"

using namespace std;

int main() {
    CSoPhuc a,b;
    cout << "Nhap so phuc A\n";
    a.Nhap();
    cout << "Nhap so phuc B\n";
    b.Nhap();

    cout << "So phuc A: ";
    a.Xuat();
    cout << "\nSo phuc B: ";
    b.Xuat();

    CSoPhuc tong,hieu,tich,thuong;
    tong = a.Tong(b);
    hieu = a.Hieu(b);
    tich = a.Tich(b);
    thuong = a.Thuong(b);

    cout << "\nTong hai so phuc la: ";
    tong.Xuat();
    cout << "\nHieu hai so phuc la: ";
    hieu.Xuat();
    cout << "\nTich hai so phuc la: ";
    tich.Xuat();
    cout << "\nThuong hai so phuc la: ";
    thuong.Xuat();
}
