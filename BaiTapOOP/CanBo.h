#ifndef _CANBO_H_
#define _CANBO_H_

#include<iostream>
#include<string>

using namespace std;

enum typeCanBo
{
	typeCongNhan=1,
	typeKySu,
	typeNhanVien,
};

class CanBo
{
private:
	string n_hoTen;
	int	   n_tuoi;
	string n_gioiTinh;
	string n_diaChi;

public:
	CanBo();
	CanBo(string hoTen, int tuoi, string gioiTinh, string diaChi);
	~CanBo();
	void setHoTen(string hoTen);
	string getHoTen();
	void setTuoi(int tuoi);
	int getTuoi();
	void setGioiTinh(string gioiTinh);
	string getGioiTinh();
	void SetDiaChi(string diaChi);
	string getDiaChi();
	virtual int getType() = 0;
	virtual void nhapThongTinCanBo();
	virtual void xuatThongTinCanBo();
};


#endif // !_CANBO_H_
