#include "CongNhan.h"

CongNhan::CongNhan()
{
    n_bac = " ";
}
CongNhan::~CongNhan()
{

}
void CongNhan::setBac(string bac)
{
    n_bac = bac;
}
string CongNhan::getBac()
{
    return n_bac;
}

int CongNhan::getType()
{
    return typeCongNhan;
}

void CongNhan::nhapThongTinCanBo()
{
    CanBo::nhapThongTinCanBo();
    cout << "Nhap bac hoc: ";
    getline(cin, n_bac);
}

void CongNhan::xuatThongTinCanBo()
{
    CanBo::xuatThongTinCanBo();
    cout << "Bac hoc: " << n_bac << endl;
}