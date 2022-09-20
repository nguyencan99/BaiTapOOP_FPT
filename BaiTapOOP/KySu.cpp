#include "KySu.h"

KySu::KySu()
{
    n_nganhDaoTao = "";
}
KySu::~KySu()
{

}
void KySu::setNganhDaoTao(string nganhDaoTao)
{
    n_nganhDaoTao = nganhDaoTao;
}
string KySu::getNganhDaoTao()
{
    return n_nganhDaoTao;
}

int KySu::getType()
{
    return typeKySu;
}

void KySu::nhapThongTinCanBo()
{
    CanBo::nhapThongTinCanBo();
    cout << "Nhap nganh dao tao: ";
    getline(cin, n_nganhDaoTao);
}

void KySu::xuatThongTinCanBo()
{
    CanBo::xuatThongTinCanBo();
    cout << "Nganh dao tao: " << n_nganhDaoTao << endl;
}