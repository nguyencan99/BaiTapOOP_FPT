#ifndef _CBGV_H_
#define _CBGV_H_

#include "Nguoi.h"
class CBGV :
    public Nguoi
{
private:
    int n_luongCung;
    int n_luongThuong;
    int n_tienPhat;
    int n_luongThucLinh;
public:
    CBGV();
    CBGV(int luongCung, int luongThuong, int tienPhat, int luongThucLinh);
    CBGV(CBGV& cbgv);
    ~CBGV();
    void setLuongCung(int luongCung);
    int getLuongCung();
    void setLuongThuong(int luongThuong);
    int getLuongThuong();
    void setTienPhat(int tienPhat);
    int getTienPhat();
    void setLuongThucLinh(int luongThucLinh);
    int getLuongThucLinh();
    void nhapThongTinGV();
    void xuatThongTinGV();
    int tinhLuongThucLinh();
};

#endif // !_CBGV_H_



