#include "Bao.h"

Bao::Bao()
{
    n_ngayPhatHanh.ngay     = 0;
    n_ngayPhatHanh.thang    = 0;
    n_ngayPhatHanh.nam      = 0;
}
Bao::Bao(Ngay ngayPhatHanh)
{
    n_ngayPhatHanh = ngayPhatHanh;
}
Bao::Bao(Bao& bao)
{
    n_ngayPhatHanh = bao.n_ngayPhatHanh;
}
Bao::~Bao()
{
}
void Bao::setNgayPhatHanh(Ngay ngayPhatHanh)
{
    n_ngayPhatHanh = ngayPhatHanh;
}
Ngay Bao::getNgayPhatHanh()
{
    return n_ngayPhatHanh;
}
void Bao::nhapThongTinTaiLieu()
{
    TaiLieu::nhapThongTinTaiLieu();
    cout << "Nhap ngay phat hanh: ";        
    cin >> n_ngayPhatHanh.ngay;
    cout << "Nhap thang phat hanh: ";
    cin >> n_ngayPhatHanh.thang;
    cout << "Nhap nam phat hanh: ";
    cin >> n_ngayPhatHanh.nam;
}
void Bao::xuatThongTinTaiLieu()
{
    TaiLieu::xuatThongTinTaiLieu();
    cout << n_ngayPhatHanh.ngay << "/" << n_ngayPhatHanh.thang << "/" << n_ngayPhatHanh.nam << endl;
}
int Bao::getType()
{
    return typeBao;
}