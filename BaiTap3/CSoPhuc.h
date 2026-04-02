#ifndef CSOPHUC_H
#define CSOPHUC_H

class CSoPhuc {
private:
    int iThuc;
    int iAo;
public:
    void Nhap();
    void Xuat();
    CSoPhuc Tong(CSoPhuc other);
    CSoPhuc Hieu(CSoPhuc other);
    CSoPhuc Tich(CSoPhuc other);
    CSoPhuc Thuong(CSoPhuc other);
};

#endif