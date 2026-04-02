#include <iostream>
#include "PhanSo.h"
using namespace std;
// Input ps1 = -2/3, ps2 = 3/5
int main() {
    CPhanSo a,b;
    cout << "Nhap phan so thu nhat\n";
    a.Nhap();
    cout << "Nhap phan so thu hai\n";
    b.Nhap();

    a.RutGon();
    b.RutGon();

    cout << "Phan so thu nhat: ";
    a.Xuat();
    cout << "Phan so thu hai: ";
    b.Xuat();

    CPhanSo tong = a.Tong(b);
    CPhanSo hieu = a.Hieu(b);
    CPhanSo tich = a.Tich(b);
    CPhanSo thuong = a.Thuong(b);

    cout << "Tong cua 2 phan so la: ";
    tong.Xuat();
    cout << "Hieu cua 2 phan so la: ";
    hieu.Xuat();
    cout << "Tich cua 2 phan so la: ";
    tich.Xuat();
    cout << "Thuong cua 2 phan so la: ";
    thuong.Xuat();

    int compare = a.SoSanh(b);
    if(compare == 1) cout << "Phan so thu nhat > phan so thu hai";
    else if(compare == -1) cout << "Phan so thu nhat < phan so thu hai";
    else cout << "Phan so thu nhat = phan so thu hai";
}