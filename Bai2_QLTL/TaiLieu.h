#ifndef _TAILIEU_H_
#define _TAILIEU_H_
#include <iostream>
#include <string>

using namespace std;

enum typeTaiLieu
{
    typeSach=1,
    typeTapChi,
    typeBao,
};

class TaiLieu
{
private:
    int     n_maTaiLieu; // duy nhat
    string  n_tenNhaXuatBan;
    int     n_soBanPhatHanh;
public:
    TaiLieu();
    TaiLieu(int maTaiLieu, string tenNhaXuatBan, int soBanPhatHanh);
    TaiLieu(TaiLieu& tl);
    ~TaiLieu();
    void    setMaTaiLieu(int maTaiLieu);
    int     getMaTaiLieu();
    void    setTenNhaXuatBan(string tenNhaXuatBan);
    string  getTenNhaXuatBan();
    void    setSoBanPhatHanh(int soBanPhatHanh);
    int     getSoBanPhatHanh();

    virtual void    nhapThongTinTaiLieu();
    virtual void    xuatThongTinTaiLieu();
    virtual int     getType();
};
#endif // !_TAILIEU_H_



