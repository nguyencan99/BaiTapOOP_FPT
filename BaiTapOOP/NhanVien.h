#ifndef _NHANVIEN_H_
#define _NHANVIEN_H_

#include "CanBo.h"

class NhanVien :
    public CanBo
{
private:
    string n_congViec;
public:
    NhanVien();
    ~NhanVien();
    void setCongViec(string congViec);
    string getCongViec();
    int getType();
    void nhapThongTinCanBo();
    void xuatThongTinCanBo();
};
#endif // !_NHANVIEN_H_



