#include <iostream>
#include <limits>
#include "CNgayThangNam.h"

using namespace std;


// Hàm kiểm tra năm nhuận
bool NamNhuan(int iNam) {
    if(iNam % 400 == 0) {
        return true;
    }
    if(iNam % 4 == 0 && iNam % 100 != 0)
        return true;
    return false;
}

// Hàm tìm số ngày tối đa trong tháng
int SoNgayTrongThang(int iThang, int iNam) {
    if(iThang == 2) 
        return NamNhuan(iNam) ? 29 : 28;
    if(iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) // Những tháng có 30 ngày
        return 30; 
    return 31; // Còn lại là những tháng có 31 ngày
}

bool NgayHopLe(int iNgay,int iThang,int iNam) {
    if (iNgay < 1 || iThang < 1 || iNam < 1 || iThang > 12) return false;
    int SoNgay = SoNgayTrongThang(iThang,iNam); // Số ngày tối đa trong tháng
    if(iNgay > SoNgay) return false; // Nếu iNgay vượt quá số ngày trong tháng thì trả về false
    return true;
}

void CNgayThangNam::Nhap() {
    while(true){
            cout << "Nhap lan luot ngay thang nam (cach nhau boi dau cach): ";
            // Kiểm tra kiểu dữ liệu đầu vào có phải là số nguyên không
            if(cin >> iNgay >> iThang >> iNam) {
                if(NgayHopLe(iNgay,iThang,iNam)) {
                    break; // Nếu dữ liệu hợp lệ thì thoát vòng lặp
                }
                else {
                    cout << "Ngay/Thang/Nam khong hop le!!!" << "\n";
                }
            } else {
                cout << "Vui long nhap so nguyen duong" << "\n";
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Xóa sạch các ký tự lỗi hoặc thừa trong bộ đệm
        }
    }
}

void CNgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam << "\n";
}

void CNgayThangNam::NgayThangNamTiepTheo() {
    iNgay += 1;
    // Nếu cộng 1 ngày mà ngày không hợp lệ (vượt quá số ngày trong tháng)
        if(!NgayHopLe(iNgay,iThang,iNam)) {
            iNgay = 1;      // Reset về ngày 1 của tháng mới
            iThang += 1;   // Tăng tháng lên 1
            // Nếu tăng tháng mà tháng không hợp lệ (vượt quá tháng 12)
            if(!NgayHopLe(iNgay,iThang,iNam)) {
                iThang = 1; // Reset về tháng 1 của năm mới
                iNam += 1; // Tăng năm lên 1
        }
    }
}


