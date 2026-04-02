#include <iostream>
#include "PhanSo.h"


int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void CPhanSo::Nhap() {
    std::cout << "Nhap tu so: ";
    std::cin >> iTu;
    
    do {
        std::cout << "Nhap mau so (khac 0): ";
        std::cin >> iMau;
    } while (iMau == 0);

}

void CPhanSo::Xuat() {
    std::cout << iTu << "/" << iMau << "\n";
}

void CPhanSo::RutGon() {
    int ucln = UCLN(abs(iTu),abs(iMau));
    iTu /= ucln;
    iMau /= ucln;
    // Đưa dấu trừ ở dưới mẫu lên trên
    if(iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
}

CPhanSo CPhanSo::Tong(const CPhanSo &other) {
    CPhanSo result;
    result.iTu = iTu * other.iMau + iMau * other.iTu;
    result.iMau = iMau * other.iMau;
    result.RutGon();
    return result;
}

CPhanSo CPhanSo::Hieu(const CPhanSo &other) {
    CPhanSo result;
    result.iTu = iTu * other.iMau - iMau * other.iTu;
    result.iMau = iMau * other.iMau;
    result.RutGon();
    return result;
}

CPhanSo CPhanSo::Tich(const CPhanSo &other) {
    CPhanSo result;
    result.iTu = iTu * other.iTu;
    result.iMau = iMau * other.iMau;
    result.RutGon();
    return result;
}

CPhanSo CPhanSo::Thuong(const CPhanSo &other) {
    CPhanSo result;
    if(other.iTu == 0) {
        std::cout << "\nKhong the chia cho 0, ham 'Thuong' se tra ve gia tri 0\n";
        return result;

    }
    result.iTu = iTu * other.iMau;
    result.iMau = iMau * other.iTu;
    result.RutGon();
    return result;
}

int CPhanSo::SoSanh(const CPhanSo &other) {
    int newTu = iTu * other.iMau; // tử số của phân số bên trái sau quy đồng
    int newOtherTu = other.iTu * iMau; // tử số của phân số bên phải sau quy đồng
    // trái lớn hơn phải thì trả về 1, ngược lại thì -1 , bằng nhau thì 0
    if(newTu > newOtherTu) return 1; 
    else if (newTu < newOtherTu) return -1;
    return 0;
}