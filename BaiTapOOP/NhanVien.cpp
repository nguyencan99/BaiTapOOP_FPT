#include "NhanVien.h"

NhanVien::NhanVien()
{
    n_congViec = " ";
}
NhanVien::~NhanVien()
{

}
void NhanVien::setCongViec(string congViec)
{
    n_congViec = congViec;
}
string NhanVien::getCongViec()
{
    return n_congViec;
}

int NhanVien::getType()
{
    return typeNhanVien;
}

void NhanVien::nhapThongTinCanBo()
{
    CanBo::nhapThongTinCanBo();
    cout << "Nhap cong viec: ";
    getline(cin, n_congViec);
}

void NhanVien::xuatThongTinCanBo()
{
    CanBo::xuatThongTinCanBo();
    cout << "Cong viec: " << n_congViec << endl;
}