#ifndef CNGAYTHANGNAM_H
#define CNGAYTHANGNAM_H

class CNgayThangNam {
private:
    int iNgay;
    int iThang;
    int iNam;
public:
    // Input: Bàn phím | Output: Gán vào iNgay, iThang, iNam | Giải thuật: Nhập số nguyên, dùng hàm NgayHopLe để kiểm tra, nếu sai bắt nhập lại.
    void Nhap();

    // Input: Không | Output: In ra màn hình | Giải thuật: Xuất ngày tháng năm theo định dạng "ngày/tháng/năm".
    void Xuat();

    // Input: Không | Output: Cập nhật ngày hiện tại | Giải thuật: Tăng ngày thêm 1; nếu vượt quá số ngày trong tháng thì reset về ngày 1 và tăng tháng; nếu tháng vượt 12 thì reset về tháng 1 và tăng năm.
    void NgayThangNamTiepTheo();
};

#endif