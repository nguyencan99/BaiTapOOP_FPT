#include "TaiLieu.h"


TaiLieu::TaiLieu()
{
    n_maTaiLieu     = 0;
    n_tenNhaXuatBan = "";
    n_soBanPhatHanh = 0;
}
TaiLieu::TaiLieu(int maTaiLieu, string tenNhaXuatBan, int soBanPhatHanh)
{
    n_maTaiLieu     = maTaiLieu;
    n_tenNhaXuatBan = tenNhaXuatBan;
    n_soBanPhatHanh = soBanPhatHanh;
}
TaiLieu::TaiLieu(TaiLieu& tl)
{
    n_maTaiLieu     = tl.getMaTaiLieu();
    n_tenNhaXuatBan = tl.getTenNhaXuatBan();
    n_soBanPhatHanh = tl.getSoBanPhatHanh();
}
TaiLieu::~TaiLieu()
{

}
void TaiLieu::setMaTaiLieu(int maTaiLieu)
{
    n_maTaiLieu = maTaiLieu;
}
int TaiLieu::getMaTaiLieu()
{
    return n_maTaiLieu;
}
void TaiLieu::setTenNhaXuatBan(string tenNhaXuatBan)
{
    n_tenNhaXuatBan = tenNhaXuatBan;
}
string TaiLieu::getTenNhaXuatBan()
{
    return n_tenNhaXuatBan;
}
void TaiLieu::setSoBanPhatHanh(int soBanPhatHanh)
{
    n_soBanPhatHanh = soBanPhatHanh;
}
int TaiLieu::getSoBanPhatHanh()
{
    return n_soBanPhatHanh;
}

void TaiLieu::nhapThongTinTaiLieu()
{
    cout << "________________INFORMATION__________________" << endl;
    cout << "___________ Nhap thong tin tai lieu:___________" << endl;
    cout << "Nhap ma tai lieu: ";           cin >> n_maTaiLieu;
    cin.ignore(32767, '\n');
    cout << "Nhap ten nha xuat ban:";       getline(cin, n_tenNhaXuatBan);
    cout << "Nhap so ban phat hanh: ";      cin >> n_soBanPhatHanh;
}
void TaiLieu::xuatThongTinTaiLieu()
{
    cout << "________________INFORMATION__________________" << endl;
    cout << "___________ Xuat thong tin tai lieu:___________" << endl;
    cout << "Ma tai lieu: "      << n_maTaiLieu     << endl;
    cout << "Ten nha xuat ban:"  << n_tenNhaXuatBan << endl;
    cout << "So ban phat hanh: " << n_soBanPhatHanh << endl;
}
int TaiLieu::getType()
{
    return 0;
}