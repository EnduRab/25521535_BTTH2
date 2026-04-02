#ifndef PHANSO_H
#define PHANSO_H

class CPhanSo {
private:
    int iTu, iMau;
public:
    // Input: Bàn phím | Output: Gán vào iTu, iMau | Giải thuật: Nhập tử, mẫu (mẫu khác 0).
    void Nhap();

    // Input: Không | Output: In màn hình | Giải thuật: Xuất dạng "tử/mẫu".
    void Xuat();

    // Input: Không | Output: Tối giản chính nó | Giải thuật: Chia tử và mẫu cho ƯCLN.
    void RutGon();

    // Input: Phân số thứ 2 | Output: Phân số tổng | Giải thuật: Quy đồng, cộng tử, rút gọn.
    CPhanSo Tong(const CPhanSo &other);

    // Input: Phân số thứ 2 | Output: Phân số hiệu | Giải thuật: Quy đồng, trừ tử, rút gọn.
    CPhanSo Hieu(const CPhanSo &other);

    // Input: Phân số thứ 2 | Output: Phân số tích | Giải thuật: Tử nhân tử, mẫu nhân mẫu, rút gọn.
    CPhanSo Tich(const CPhanSo &other);

    // Input: Phân số thứ 2 | Output: Phân số thương | Giải thuật: Nhân nghịch đảo, rút gọn.
    CPhanSo Thuong(const CPhanSo &other);

    // Input: Phân số thứ 2 | Output: 1 (>), 0 (==), -1 (<) | Giải thuật: So sánh hai tích chéo.
    int SoSanh(const CPhanSo &other);
};

#endif