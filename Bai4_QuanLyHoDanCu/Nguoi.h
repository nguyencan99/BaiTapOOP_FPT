#ifndef _NGUOI_H_
#define _NGUOI_H_

#include<iostream>
#include<string>

using namespace std;

class Nguoi
{
private:
    string n_hoTen;
    int n_tuoi;
    string n_ngheNghiep;
    int n_CMND;
public:
    Nguoi();
    Nguoi(string hoTen, int tuoi, string ngheNghiep, int cmnd);
    Nguoi(Nguoi& nguoi);
    ~Nguoi();
    void setHoTen(string hoTen);
    string getHoTen();
    void setTuoi(int tuoi);
    int getTuoi();
    void setNgheNghiep(string ngheNghiep);
    string getNgheNgiep();
    void setCMND(int cmnd);
    int getCMND();
    void nhapThongTinCaNhan();
    void xuatThongTinCaNhan();
};


#endif // !_NGUOI_H_


