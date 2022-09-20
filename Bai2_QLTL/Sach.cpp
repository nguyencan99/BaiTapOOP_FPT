#include "Sach.h"

Sach::Sach()
{
    n_soTrang   = 0;
    n_tenTacgia = "";
}
Sach::Sach(string tenTacGia, int soTrang)
{
    n_tenTacgia = tenTacGia;
    n_soTrang   = soTrang;
}
Sach::Sach(Sach& sach)
{
    n_soTrang   = sach.getSoTrang();
    n_tenTacgia = sach.getTenTacGia();
}
Sach::~Sach()
{

}

void Sach::setTenTacGia(string tenTacGia)
{
    n_tenTacgia = tenTacGia;
}
string Sach::getTenTacGia()
{
    return n_tenTacgia;
}
void Sach::setSoTrang(int soTrang)
{
    n_soTrang = soTrang;
}
int Sach::getSoTrang()
{
    return n_soTrang;
}
void Sach::nhapThongTinTaiLieu()
{
    TaiLieu::nhapThongTinTaiLieu();
    cin.ignore(32767, '\n');
    cout << "Nhap ten tac gia: ";       getline(cin, n_tenTacgia);
    cout << "Nhap so trang: ";          cin >> n_soTrang;
}
void Sach::xuatThongTinTaiLieu()
{
    TaiLieu::xuatThongTinTaiLieu();
    cout << "Ten tac gia: " << n_tenTacgia << endl;
    cout << "So trang: "    << n_soTrang   << endl;
}
int Sach::getType()
{
    return typeSach;
}
