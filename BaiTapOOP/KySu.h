#ifndef _KYSU_H_
#define _KYSU_H_

#include "CanBo.h"
class KySu :
    public CanBo
{
private:
    string n_nganhDaoTao;
public:
    KySu();
    ~KySu();
    void setNganhDaoTao(string nganhDaoTao);
    string getNganhDaoTao();
    int getType();
    void nhapThongTinCanBo();
    void xuatThongTinCanBo();
};

#endif // !_KYSU_H_



