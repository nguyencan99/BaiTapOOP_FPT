#include "ThiSinh.h"

ThiSinh::ThiSinh()
{
    n_soBaoDanh = 0;
    n_hoTen     = "";
    n_diaChi    = "";
    n_mucUuTien = 0;
}
ThiSinh::ThiSinh(int soBaoDanh, string hoTen, string diaChi, int mucUuTien)
{
    n_soBaoDanh = soBaoDanh;
    n_hoTen     = hoTen;
    n_diaChi    = diaChi;
    n_mucUuTien = mucUuTien;
}
ThiSinh::ThiSinh(ThiSinh& ts)
{
    n_soBaoDanh = ts.n_soBaoDanh;
    n_hoTen     = ts.n_hoTen;
    n_diaChi    = ts.n_diaChi;
    n_mucUuTien = ts.n_mucUuTien;
}
ThiSinh::~ThiSinh()
{

}
void ThiSinh::setSoBaoDanh(int soBaoDanh)
{
    n_soBaoDanh = soBaoDanh;
}
int ThiSinh::getSoBaoDanh()
{
    return n_soBaoDanh;
}
void ThiSinh::setHoTen(string hoTen)
{
    n_hoTen = hoTen;
}
string ThiSinh::getHoTen()
{
    return n_hoTen;
}
void ThiSinh::setDiaChi(string diaChi)
{
    n_diaChi = diaChi;
}
string ThiSinh::getDiaChi()
{
    return n_diaChi;
}
void ThiSinh::setMucUuTien(int mucUuTien)
{
    n_mucUuTien = mucUuTien;
}
int ThiSinh::getMucUuTien()
{
    return n_mucUuTien;
}
void ThiSinh::nhapThongTinThiSinh()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "___________ Nhap thong tin thi sinh:___________" << endl;
    cout << "Nhap so bao danh: ";   cin >> n_soBaoDanh;
    cin.ignore(32767, '\n');
    cout << "Nhap ho va ten: ";     getline(cin, n_hoTen);
    cout << "Nhap dia chi: ";       getline(cin, n_diaChi);
    cout << "Nhap muc uu tien: ";   cin >> n_mucUuTien;

}
void ThiSinh::xuatThongTinThiSinh()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "___________ Xuat thong tin thi sinh:___________" << endl;
    cout << "So bao danh: " << n_soBaoDanh  << endl;
    cout << "Ho va ten: "   << n_hoTen      << endl;
    cout << "Dia chi: "     << n_diaChi     << endl;
    cout << "Muc uu tien: " << n_mucUuTien  << endl;
}