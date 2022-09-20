#include "HoGiaDinh.h"

HoGiaDinh::HoGiaDinh()
{
    n_soNha = 0;
}
HoGiaDinh::HoGiaDinh(std::vector<Nguoi*> thanhVien, int soNha)
{
    pthanhVien = thanhVien;
    n_soNha = soNha;
}
HoGiaDinh::~HoGiaDinh()
{

}
void HoGiaDinh::setThanhVien(std::vector<Nguoi*> thanhVien)
{
    pthanhVien = thanhVien;
}
std::vector<Nguoi*> HoGiaDinh::getThanhVien()
{
    return pthanhVien;
}
void HoGiaDinh::setSoNha(int soNha)
{
    n_soNha = soNha;
}
int HoGiaDinh::getSoNha()
{
    return n_soNha;
}
void HoGiaDinh::nhapThongTinHoGiaDinh()
{
    int soThanhVien;
    cout << "Nhap so thanh vien trong gia dinh:";
    cin  >> soThanhVien;
    for (int i = 0; i < soThanhVien; i++)
    {
        Nguoi* pTemp = new Nguoi();
        pTemp->nhapThongTinCaNhan();
        pthanhVien.push_back(pTemp);
    }
    cout << "Nhap so nha: ";
    cin  >> n_soNha;
}
void HoGiaDinh::xuatThongTinHoGiaDinh()
{
    cout << "XUAT THONG TIN HO GIA DINH TRONG KHU PHO: " << endl;
    cout << "So nha: " << n_soNha << endl;

    for (int i = 0; i < pthanhVien.size(); i++)
    {
        pthanhVien[i]->xuatThongTinCaNhan();
    }
    
}