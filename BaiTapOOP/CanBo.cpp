#include "CanBo.h"

CanBo::CanBo()
{
	n_hoTen = " ";
	n_tuoi = 0;
	n_gioiTinh = " ";
	n_diaChi = " ";
}

CanBo::CanBo(string hoTen, int tuoi, string gioiTinh, string diaChi)
{
	n_hoTen = hoTen;
	n_tuoi = tuoi;
	n_gioiTinh = gioiTinh;
	n_diaChi = diaChi;
}


CanBo::~CanBo()
{
}
void CanBo::setHoTen(string hoTen)
{
	n_hoTen = hoTen;
}

string CanBo::getHoTen()
{
	return n_hoTen;
}

void CanBo::setTuoi(int tuoi)
{
	n_tuoi = tuoi;
}

int CanBo::getTuoi()
{
	return n_tuoi;
}

void CanBo::setGioiTinh(string gioiTinh)
{
	n_gioiTinh = gioiTinh;
}

string CanBo::getGioiTinh()
{
	return n_gioiTinh;
}

void CanBo::SetDiaChi(string diaChi)
{
	n_diaChi = diaChi;
}

string CanBo::getDiaChi()
{
	return n_diaChi;
}

void CanBo::nhapThongTinCanBo()
{
	cout << "________________INFORMATION__________________" << endl;
	cout << "___________ Nhap thong tin can bo:___________" << endl;
	cin.ignore(32767, '\n');
	cout << "Ho va ten: ";		getline(cin, n_hoTen);	
	cout << "Tuoi: ";			cin >> n_tuoi;			cin.ignore(32767, '\n');
	cout << "Gioi tinh: ";		cin >> n_gioiTinh;		cin.ignore(32767, '\n');
	cout << "Dia chi: ";		getline(cin, n_diaChi);	
}
void CanBo::xuatThongTinCanBo()
{
	cout << "________________INFORMATION__________________" << endl;
	cout << "___________ Xuat thong tin can bo:___________" << endl;
	cout << "Ho va ten: " << n_hoTen << endl;
	cout << "Tuoi: " << n_tuoi << endl;
	cout << "Gioi tinh: " << n_gioiTinh << endl;
	cout << "Dia chi: " << n_diaChi << endl;
}