#include "ThiSinhKhoiB.h"

ThiSinhKhoiB::ThiSinhKhoiB()
{
    n_diemToan = 0;
    n_diemSinh = 0;
    n_diemHoa  = 0;
}
ThiSinhKhoiB::ThiSinhKhoiB(int diemToan, int diemSinh, int diemHoa)
{
    n_diemToan = diemToan;
    n_diemSinh = diemSinh;
    n_diemHoa  = diemHoa;
}
ThiSinhKhoiB::ThiSinhKhoiB(ThiSinhKhoiB& tsB)
{
    n_diemToan = tsB.n_diemToan;
    n_diemSinh = tsB.n_diemSinh;
    n_diemHoa  = tsB.n_diemHoa;
}
ThiSinhKhoiB::~ThiSinhKhoiB()
{

}
void ThiSinhKhoiB::setDiemToan(int diemToan)
{
    n_diemToan = diemToan;
}
int ThiSinhKhoiB::getDiemToan()
{
    return n_diemToan;
}
void ThiSinhKhoiB::setDiemSinh(int diemSinh)
{
    n_diemSinh = diemSinh;
}
int ThiSinhKhoiB::getDiemSinh()
{
    return n_diemSinh;
}
void ThiSinhKhoiB::setDiemHoa(int diemHoa)
{
    n_diemHoa = diemHoa;
}
int ThiSinhKhoiB::getDiemHoa()
{
    return n_diemHoa;
}
int ThiSinhKhoiB::getType()
{
    return khoiB;
}
void ThiSinhKhoiB::nhapThongTinThiSinh()
{
    ThiSinh::nhapThongTinThiSinh();
    cout << "Nhap diem Toan: "; cin >> n_diemToan;
    cout << "Nhap diem Sinh: ";   cin >> n_diemSinh;
    cout << "Nhap diem Hoa: ";  cin >> n_diemHoa;
}
void ThiSinhKhoiB::xuatThongTinThiSinh()
{
    ThiSinh::xuatThongTinThiSinh();
    cout << "Diem Toan: " << n_diemToan << endl;
    cout << "Diem Sinh: " << n_diemSinh << endl;
    cout << "Diem Hoa: " << n_diemHoa << endl;
}