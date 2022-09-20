#ifndef _CONGNHANH_H_
#define _CONGNHANH_H_


#include "CanBo.h"

class CongNhan : public CanBo
{
private:
    string n_bac;

public:
    CongNhan();
    ~CongNhan();
    void setBac(string bac);
    string getBac();
    int getType();
    void nhapThongTinCanBo();
    void xuatThongTinCanBo();
};

#endif // !_CONGNHANH_H_



