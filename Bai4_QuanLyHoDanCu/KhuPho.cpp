#include "KhuPho.h"

KhuPho::KhuPho()
{

}
KhuPho::KhuPho(std::vector<HoGiaDinh*> pHo)
{
    pHoGD = pHo;
}
KhuPho::KhuPho(KhuPho& khupho)
{
    pHoGD = khupho.pHoGD;
}
KhuPho::~KhuPho()
{

}
void KhuPho::setHoGD(std::vector<HoGiaDinh*> pHo)
{
    pHoGD = pHo;
}
std::vector<HoGiaDinh*> KhuPho::getHoGD()
{
    return pHoGD;
}
void KhuPho::nhapThongTinKhuPho(int soHoDan)
{
    cout << "NHAP THONG TIN HO GIA DINH TRONG KHU PHO: " << endl;

    for (int i = 0; i < soHoDan; i++)
    {
        HoGiaDinh* p_Ho = new HoGiaDinh();
        p_Ho->nhapThongTinHoGiaDinh();
        pHoGD.push_back(p_Ho);
    }
}
void KhuPho::xuatThongTinKhuPho()
{
    for (int i = 0; i < pHoGD.size(); i++)
    {
        pHoGD[i]->xuatThongTinHoGiaDinh();
    }
}