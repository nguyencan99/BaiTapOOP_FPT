#ifndef _THISINH_H_
#define _THISINH_H_

#include <iostream>
#include <string>

using namespace std;

enum khoiThi
{
	khoiA = 1,
	khoiB,
	khoiC,
};

class ThiSinh
{
private:
    int		n_soBaoDanh;
    string	n_hoTen;
    string	n_diaChi;
    int		n_mucUuTien;
public:
	ThiSinh();
	ThiSinh(int soBaoDanh, string hoTen, string diaChi, int mucUuTien);
	ThiSinh(ThiSinh& ts);
	~ThiSinh();
	void setSoBaoDanh(int soBaoDanh);
	int getSoBaoDanh();
	void setHoTen(string hoTen);
	string getHoTen();
	void setDiaChi(string diaChi);
	string getDiaChi();
	void setMucUuTien(int mucUuTien);
	int getMucUuTien();
	virtual int getType() = 0;
	virtual void nhapThongTinThiSinh();
	virtual void xuatThongTinThiSinh();
};

#endif // !_THISINH_H_


