#include <iostream>
#include "CGioPhutGiay.h"
using namespace std;


bool GioPhutGiayHopLe(int gio,int phut,int giay) {
    if(giay < 0 || gio < 0 || phut < 0 || giay >= 60 || phut >= 60 || gio >= 24) return false;
    return true;
}

void CGioPhutGiay::Nhap() {
    do {
        cout << "Nhap gio: ";
        cin >> iGio;
        cout << "Nhap phut: ";
        cin >> iPhut;
        cout << "Nhap giay: ";
        cin >> iGiay;
        
        if (!GioPhutGiayHopLe(iGio, iPhut, iGiay)) {
            cout << "Gio phut giay ko hop le, vui long nhap lai\n";
        }
    } while (!GioPhutGiayHopLe(iGio, iPhut, iGiay));
}

void CGioPhutGiay::Xuat() {
    if(iGio < 10) cout << 0;
    cout << iGio << ":"; 
    if(iPhut < 10) cout << 0;
    cout << iPhut << ":"; 
    if(iGiay < 10) cout << 0;
    cout << iGiay;
}

void CGioPhutGiay::TinhCongThemMotGiay() {
    iGiay++; // Cộng thêm 1 giây
    if (iGiay >= 60) {
        iGiay = 0;
        iPhut++; // Nhớ 1 qua phút
        if (iPhut >= 60) {
            iPhut = 0;
            iGio++; // Nhớ 1 qua giờ
            if (iGio >= 24) {
                iGio = 0; // Sang ngày mới
            }
        }
    }
}
