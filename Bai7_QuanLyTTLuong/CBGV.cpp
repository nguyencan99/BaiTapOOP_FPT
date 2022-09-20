#include "CBGV.h"

CBGV::CBGV()
{
    n_luongCung     = 0;
    n_luongThuong   = 0;
    n_tienPhat      = 0;
    n_luongThucLinh = 0;
}
CBGV::CBGV(int luongCung, int luongThuong, int tienPhat, int luongThucLinh)
{
    n_luongCung     = luongCung;
    n_luongThuong   = luongThuong;
    n_tienPhat      = tienPhat;
    n_luongThucLinh = luongThucLinh;
}
CBGV::CBGV(CBGV& cbgv)
{
    n_luongCung     = cbgv.n_luongCung;
    n_luongThuong   = cbgv.n_luongThuong;
    n_tienPhat      = cbgv.n_tienPhat;
    n_luongThucLinh = cbgv.n_luongThucLinh;
}
CBGV::~CBGV()
{

}
void CBGV::setLuongCung(int luongCung)
{
    n_luongCung = luongCung;
}
int CBGV::getLuongCung()
{
    return n_luongCung;
}
void CBGV::setLuongThuong(int luongThuong)
{
    n_luongThuong = luongThuong;
}
int CBGV::getLuongThuong()
{
    return n_luongThuong;
}
void CBGV::setTienPhat(int tienPhat)
{
    n_tienPhat = tienPhat;
}
int CBGV::getTienPhat()
{
    return n_tienPhat;
}
void CBGV::setLuongThucLinh(int luongThucLinh)
{
    n_luongThucLinh = luongThucLinh;
}
int CBGV::getLuongThucLinh()
{
    return n_luongThucLinh;
}

int CBGV::tinhLuongThucLinh()
{
    n_luongThucLinh = n_luongCung + n_luongThuong - n_tienPhat;
    return n_luongThucLinh;
}

void CBGV::nhapThongTinGV()
{
    Nguoi::nhapThongTinCaNhan();
    cout << "Nhap luong cung: ";        cin >> n_luongCung;
    cout << "Nhap luong thuong: ";      cin >> n_luongThuong;
    cout << "Nhap tien phat: ";         cin >> n_tienPhat;
    CBGV::tinhLuongThucLinh();
}
void CBGV::xuatThongTinGV()
{
    Nguoi::xuatThongTinCaNhan();
    cout << "Luong cung: "      << n_luongCung      <<endl;
    cout << "Luong thuong: "    << n_luongThuong    << endl;
    cout << "Tien phat: "       << n_tienPhat       << endl;
    cout << "Luong thuc linh: " << n_luongThucLinh  << endl;
}