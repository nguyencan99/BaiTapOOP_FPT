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
    string n_queQuan;
    int n_maSoGV;
public:
    Nguoi();
    Nguoi(string hoTen, int tuoi, string queQuan, int maSoGV);
    Nguoi(Nguoi& nguoi);
    ~Nguoi();
    void setHoTen(string hoTen);
    string getHoTen();
    void setTuoi(int tuoi);
    int getTuoi();
    void setQueQuan(string queQuan);
    string getQueQuan();
    void setMaSoGV(int maSoGV);
    int getMaSoGV();
    void nhapThongTinCaNhan();
    void xuatThongTinCaNhan();
};


#endif // !_NGUOI_H_


