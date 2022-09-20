#include <iostream>
#include "HoGiaDinh.h"
#include "KhuPho.h"
#include "Nguoi.h"

int main()
{
    int soHoGiaDinh;
    KhuPho khuPho1;
    cout << "Nhap so ho gia dinh trong khu pho:";
    cin >> soHoGiaDinh;
    cin.ignore(32767, '\n');
    khuPho1.nhapThongTinKhuPho(soHoGiaDinh);
    khuPho1.xuatThongTinKhuPho();
}