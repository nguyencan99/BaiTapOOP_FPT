#include "ThiSinhKhoiA.h"

ThiSinhKhoiA::ThiSinhKhoiA()
{
    n_diemToan = 0;
    n_diemLy   = 0;
    n_diemHoa  = 0;
}
ThiSinhKhoiA::ThiSinhKhoiA(int diemToan, int diemLy, int diemHoa)
{
    n_diemToan = diemToan;
    n_diemLy   = diemLy;
    n_diemHoa  = diemHoa;
}
ThiSinhKhoiA::ThiSinhKhoiA(ThiSinhKhoiA& tsA)
{
    n_diemToan = tsA.n_diemToan;
    n_diemLy   = tsA.n_diemLy;
    n_diemHoa  = tsA.n_diemHoa;
}
ThiSinhKhoiA::~ThiSinhKhoiA()
{

}
void ThiSinhKhoiA::setDiemToan(int diemToan)
{
    n_diemToan = diemToan;
}
int ThiSinhKhoiA::getDiemToan()
{
    return n_diemToan;
}
void ThiSinhKhoiA::setDiemLy(int diemLy)
{
    n_diemLy = diemLy;
}
int ThiSinhKhoiA::getDiemLy()
{
    return n_diemLy;
}
void ThiSinhKhoiA::setDiemHoa(int diemHoa)
{
    n_diemHoa = diemHoa;
}
int ThiSinhKhoiA::getDiemHoa()
{
    return n_diemHoa;
}
int ThiSinhKhoiA::getType()
{
    return khoiA;
}
void ThiSinhKhoiA::nhapThongTinThiSinh()
{
    ThiSinh::nhapThongTinThiSinh();
    cout << "Nhap diem Toan: "; cin >> n_diemToan;
    cout << "Nhap diem Ly: ";   cin >> n_diemLy;
    cout << "Nhap diem Hoa: ";  cin >> n_diemHoa;
}
void ThiSinhKhoiA::xuatThongTinThiSinh()
{
    ThiSinh::xuatThongTinThiSinh();
    cout << "Diem Toan: " << n_diemToan << endl;
    cout << "Diem Ly: "   << n_diemLy << endl;
    cout << "Diem Hoa: "  << n_diemHoa << endl;
}