#include <iostream>
#include <cmath>
#include "CSoPhuc.h"
using namespace std;


void CSoPhuc::Nhap() {
    cout << "Nhap thuc: ";
    cin >> iThuc;
    cout << "Nhap ao: ";
    cin >> iAo;
}

void CSoPhuc::Xuat() {
    cout << iThuc;
    if(iAo == 0) return;
    if(iAo < 0) cout << " - " << abs(iAo);
    if(iAo > 0) cout << " + " << abs(iAo);
    cout << "i";
}

CSoPhuc CSoPhuc::Tong(CSoPhuc other) {
    CSoPhuc result;
    result.iThuc = iThuc + other.iThuc;
    result.iAo = iAo + other.iAo;
    return result;
}

CSoPhuc CSoPhuc::Hieu(CSoPhuc other) {
    CSoPhuc result;
    result.iThuc = iThuc - other.iThuc;
    result.iAo = iAo - other.iAo;
    return result; 
}

CSoPhuc CSoPhuc::Tich(CSoPhuc other) {
    CSoPhuc result;
    result.iThuc = (iThuc * other.iThuc - iAo * other.iAo);
    result.iAo = (iThuc * other.iAo + iAo * other.iThuc);
    return result;
}

CSoPhuc CSoPhuc::Thuong(CSoPhuc other) {
    CSoPhuc result;
    result.iThuc = (iThuc * other.iThuc + iAo * other.iAo) / (other.iThuc * other.iThuc + other.iAo * other.iAo);
    result.iAo = (iAo * other.iThuc - other.iAo * iThuc) /  (other.iThuc * other.iThuc + other.iAo * other.iAo);
    return result;
}