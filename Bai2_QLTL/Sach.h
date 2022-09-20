#ifndef _SACH_H_
#define _SACH_H_

#include "TaiLieu.h"
class Sach :
    public TaiLieu
{
private:
    string n_tenTacgia;
    int    n_soTrang;
public:
    Sach();
    Sach(string tenTacGia, int soTrang);
    Sach(Sach& sach);
    ~Sach();

    void setTenTacGia(string tenTacGia);
    string getTenTacGia();
    void setSoTrang(int soTrang);
    int getSoTrang();
    void nhapThongTinTaiLieu();
    void xuatThongTinTaiLieu();
    int getType();
};

#endif // !_SACH_H_



