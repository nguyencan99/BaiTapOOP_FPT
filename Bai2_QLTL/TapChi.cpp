#include "TapChi.h"

TapChi::TapChi()
{
    n_soPhatHanh    = 0;
    n_thangPhatHanh = 0;
}
TapChi::TapChi(int soPhatHanh, int thangPhatHanh)
{
    n_soPhatHanh    = soPhatHanh;
    n_thangPhatHanh = thangPhatHanh;
}
TapChi::TapChi(TapChi& tapChi)
{
    n_soPhatHanh = tapChi.n_soPhatHanh;
    n_thangPhatHanh = tapChi.n_thangPhatHanh;
}
TapChi::~TapChi()
{

}
void TapChi::setThangPhatHanh(int thang)
{
    n_thangPhatHanh = thang;
}
int TapChi::getThangPhatHanh()
{
    return n_thangPhatHanh;
}
void TapChi::setSoPhatHanh(int soPhatHanh)
{
    n_soPhatHanh = soPhatHanh;
}
int TapChi::getSoPhatHanh()
{
    return n_soPhatHanh;
}
void TapChi::nhapThongTinTaiLieu()
{
    TaiLieu::nhapThongTinTaiLieu();
    cout << "Nhap so phat hanh: ";      cin >> n_soPhatHanh;
    cout << "Nhap thang phat hanh: ";   cin >> n_thangPhatHanh;

}
void TapChi::xuatThongTinTaiLieu()
{
    TaiLieu::xuatThongTinTaiLieu();
    cout << "So phat hanh: "    << n_soPhatHanh << endl;
    cout << "Thang phat hanh: " << n_thangPhatHanh << endl;
}
int TapChi::getType()
{
    return typeTapChi;
}