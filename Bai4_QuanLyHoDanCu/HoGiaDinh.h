#ifndef _HOGIADINH_H_
#define _HOGIADINH_H_

#include "Nguoi.h"
#include <vector>
#include <iostream>

using namespace std;

class HoGiaDinh :
    public Nguoi
{
private:
    std::vector<Nguoi*> pthanhVien;
    int n_soNha;
public:
    HoGiaDinh();
    HoGiaDinh(std::vector<Nguoi*> thanhVien, int soNha);
    ~HoGiaDinh();
    void setThanhVien(std::vector<Nguoi*> thanhVien);
    std::vector<Nguoi*> getThanhVien();
    void setSoNha(int soNha);
    int getSoNha();
    void nhapThongTinHoGiaDinh();
    void xuatThongTinHoGiaDinh();
};
#endif // !_HOGIADINH_H_



