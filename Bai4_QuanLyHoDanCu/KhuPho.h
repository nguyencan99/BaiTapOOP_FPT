#ifndef _KHUPHO_H_
#define _KHUPHO_H_

#include "HoGiaDinh.h"


class KhuPho :
    public HoGiaDinh
{
private:
    std::vector<HoGiaDinh*> pHoGD;
public:
    KhuPho();
    KhuPho(std::vector<HoGiaDinh*> pHo);
    KhuPho(KhuPho& khupho);
    ~KhuPho();
    void setHoGD(std::vector<HoGiaDinh*> pHo);
    std::vector<HoGiaDinh*> getHoGD();
    void nhapThongTinKhuPho(int soHoDan);
    void xuatThongTinKhuPho();
};
#endif // !_KHUPHO_H_



