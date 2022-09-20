#include "Nguoi.h"
Nguoi::Nguoi()
{
    n_hoTen = "";
    n_tuoi = 0;
    n_queQuan = "";
    n_maSoGV = 0;
}
Nguoi::Nguoi(string hoTen, int tuoi, string queQuan, int maSoGV)
{
    n_hoTen = hoTen;
    n_tuoi = tuoi;
    n_queQuan = queQuan;
    n_maSoGV = maSoGV;
}
Nguoi::Nguoi(Nguoi& nguoi)
{
    n_hoTen = nguoi.n_hoTen;
    n_tuoi = nguoi.n_tuoi;
    n_queQuan = nguoi.n_queQuan;
    n_maSoGV = nguoi.n_maSoGV;
}
Nguoi::~Nguoi()
{

}
void Nguoi::setHoTen(string hoTen)
{
    n_hoTen = hoTen;
}
string Nguoi::getHoTen()
{
    return n_hoTen;
}
void Nguoi::setTuoi(int tuoi)
{
    n_tuoi = tuoi;
}
int Nguoi::getTuoi()
{
    return n_tuoi;
}
void Nguoi::setQueQuan(string ngheNghiep)
{
    n_queQuan = ngheNghiep;
}
string Nguoi::getQueQuan()
{
    return n_queQuan;
}
void Nguoi::setMaSoGV(int maSoGV)
{
    n_maSoGV = maSoGV;
}
int Nguoi::getMaSoGV()
{
    return n_maSoGV;
}
void Nguoi::nhapThongTinCaNhan()
{
    cout << "________________INFORMATION__________________" << endl;
    cout << "___________ Nhap thong tin ca nhan:___________" << endl;
    cin.ignore(32767, '\n');
    cout << "Ho va ten: ";          getline(cin, n_hoTen);
    cout << "Tuoi: ";               cin >> n_tuoi;
    cin.ignore(32767, '\n');
    cout << "Que Quan: ";           getline(cin, n_queQuan);
    cout << "Ma so giao vien: ";    cin >> n_maSoGV;
}

void Nguoi::xuatThongTinCaNhan()
{
    cout << "________________INFORMATION__________________" << endl;
    cout << "___________ Xuat thong tin can bo:___________" << endl;
    cout << "Ho va ten: "       << n_hoTen      << endl;
    cout << "Tuoi: "            << n_tuoi       << endl;
    cout << "Que Quan: "        << n_queQuan    << endl;
    cout << "Ma so giao vien: " << n_maSoGV     << endl;
}