#include "Nguoi.h"

Nguoi::Nguoi()
{
    n_hoTen      = "";
    n_tuoi       = 0;
    n_ngheNghiep = "";
    n_CMND       = 0;
}
Nguoi::Nguoi(string hoTen, int tuoi, string ngheNghiep, int cmnd)
{
    n_hoTen      = hoTen;
    n_tuoi       = tuoi;
    n_ngheNghiep = ngheNghiep;
    n_CMND       = cmnd;
}
Nguoi::Nguoi(Nguoi& nguoi)
{
    n_hoTen      = nguoi.n_hoTen;
    n_tuoi       = nguoi.n_tuoi;
    n_ngheNghiep = nguoi.n_ngheNghiep;
    n_CMND       = nguoi.n_CMND;
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
void Nguoi::setNgheNghiep(string ngheNghiep)
{
    n_ngheNghiep = ngheNghiep;
}
string Nguoi::getNgheNgiep()
{
    return n_ngheNghiep;
}
void Nguoi::setCMND(int cmnd)
{
    n_CMND = cmnd;
}
int Nguoi::getCMND()
{
    return n_CMND;
}
void Nguoi::nhapThongTinCaNhan()
{
    cout << "________________INFORMATION__________________" << endl;
    cout << "___________ Nhap thong tin ca nhan:___________" << endl;
    cin.ignore(32767, '\n');
    cout << "Ho va ten: ";      getline(cin, n_hoTen);
    cout << "Tuoi: ";           cin >> n_tuoi;     
    cin.ignore(32767, '\n');
    cout << "Nghe Nghiep: ";    getline(cin, n_ngheNghiep);
    cout << "CMND: ";           cin >> n_CMND;          
}

void Nguoi::xuatThongTinCaNhan()
{
    cout << "________________INFORMATION__________________" << endl;
    cout << "___________ Xuat thong tin can bo:___________" << endl;
    cout << "Ho va ten: "   << n_hoTen      << endl;
    cout << "Tuoi: "        << n_tuoi       << endl;
    cout << "Nghe Nghiep: " << n_ngheNghiep << endl;
    cout << "CMND: "        << n_CMND       << endl;
}