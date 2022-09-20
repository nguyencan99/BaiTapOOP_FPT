#ifndef _TAPCHI_H_
#define _TAPCHI_H_

#include "TaiLieu.h"
class TapChi :
    public TaiLieu
{
private:
    int n_soPhatHanh;
    int n_thangPhatHanh;
public:
    TapChi();
    TapChi(int soPhatHanh, int thangPhatHanh);
    TapChi(TapChi& tapChi);
    ~TapChi();
    void setThangPhatHanh(int thang);
    int getThangPhatHanh();
    void setSoPhatHanh(int soPhatHanh);
    int getSoPhatHanh();
    void nhapThongTinTaiLieu();
    void xuatThongTinTaiLieu();
    int getType();
};

#endif //_TAPCHI_H_

