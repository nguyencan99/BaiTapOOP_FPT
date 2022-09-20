#ifndef _BAO_H_
#define _BAO_H_

#include "TaiLieu.h"

struct Ngay
{
    int ngay;
    int thang;
    int nam;
};

class Bao :
    public TaiLieu
{
private:
    Ngay n_ngayPhatHanh;
public:
    Bao();
    Bao(Ngay ngayPhatHanh);
    Bao(Bao& bao);
    ~Bao();
    void setNgayPhatHanh(Ngay ngayPhatHanh);
    Ngay getNgayPhatHanh();
    void nhapThongTinTaiLieu();
    void xuatThongTinTaiLieu();
    int getType();
};

#endif //_BAO_H_