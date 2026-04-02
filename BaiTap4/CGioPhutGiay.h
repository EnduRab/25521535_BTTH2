#ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H

class CGioPhutGiay {
private:
    int iGio;
    int iPhut;
    int iGiay;
public:
    // Input: Bàn phím | Output: Gán giá trị vào iGio, iPhut, iGiay | Giải thuật: Nhập lần lượt 3 giá trị, dùng hàm kiểm tra hợp lệ, nếu sai bắt nhập lại.
    void Nhap();

    // Input: Không | Output: In ra màn hình | Giải thuật: Xuất dạng "hh:mm:ss", có thêm số 0 ở trước nếu giá trị nhỏ hơn 10.
    void Xuat();

    // Input: Không | Output: Cập nhật giờ hiện tại | Giải thuật: Tăng giây thêm 1; nếu giây chạm 60 thì reset về 0 và tăng phút; tương tự cho phút và giờ (giờ chạm 24 thì về 0).
    void TinhCongThemMotGiay();
};

#endif