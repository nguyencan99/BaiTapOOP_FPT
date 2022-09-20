#include "ThiSinhKhoiC.h"


ThiSinhKhoiC::ThiSinhKhoiC()
{
    n_diemVan = 0;
    n_diemSu  = 0;
    n_diemDia = 0;
}
ThiSinhKhoiC::ThiSinhKhoiC(int diemVan, int diemSu, int diemDia)
{
    n_diemVan = diemVan;
    n_diemSu  = diemSu;
    n_diemDia = diemDia;
}
ThiSinhKhoiC::ThiSinhKhoiC(ThiSinhKhoiC& tsC)
{
    n_diemVan = tsC.n_diemVan;
    n_diemSu  = tsC.n_diemSu;
    n_diemDia = tsC.n_diemDia;
}
ThiSinhKhoiC::~ThiSinhKhoiC()
{

}
void ThiSinhKhoiC::setDiemVan(int diemVan)
{
    n_diemVan = diemVan;
}
int ThiSinhKhoiC::getDiemVan()
{
    return n_diemVan;
}
void ThiSinhKhoiC::setDiemSu(int diemSu)
{
    n_diemSu = diemSu;
}
int ThiSinhKhoiC::getDiemSu()
{
    return n_diemSu;
}
void ThiSinhKhoiC::setDiemDia(int diemDia)
{
    n_diemDia = diemDia;
}
int ThiSinhKhoiC::getDiemDia()
{
    return n_diemDia;
}
int ThiSinhKhoiC::getType()
{
    return khoiC;
}
void ThiSinhKhoiC::nhapThongTinThiSinh()
{
    ThiSinh::nhapThongTinThiSinh();
    cout << "Nhap diem Van: "; cin >> n_diemVan;
    cout << "Nhap diem Su: ";   cin >> n_diemSu;
    cout << "Nhap diem Dia: ";  cin >> n_diemDia;
}
void ThiSinhKhoiC::xuatThongTinThiSinh()
{
    ThiSinh::xuatThongTinThiSinh();
    cout << "Diem Van: " << n_diemVan << endl;
    cout << "Diem sU: " << n_diemSu << endl;
    cout << "Diem Dia: " << n_diemDia << endl;
}