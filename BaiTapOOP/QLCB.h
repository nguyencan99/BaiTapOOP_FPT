#ifndef _QLCB_H_
#define _QLCB_H_

#include <iostream>
#include <stdio.h>
#include <vector>
#include "CanBo.h"
#include "CongNhan.h"
#include "KySu.h"
#include "NhanVien.h"

using namespace std;

void themMoiCanBo(std::vector<CanBo*>& pCanBo, int n)
{
    int typeCanBo;
    for (int i = 0; i < n; i++)
    {
        cout << "Chon can bo can nhap thong tin: " << endl;
        cout << "1. Cong nhan" << endl;
        cout << "2. Ky su" << endl;
        cout << "3. Nhan vien" << endl;
        cout << "Chon: ";
        cin >> typeCanBo;

        CanBo* p = NULL;

        if (typeCanBo == typeCongNhan)
        {
            p = new CongNhan();
            pCanBo.push_back(p);
        }

        if (typeCanBo == typeKySu)
        {
            p = new KySu();
            pCanBo.push_back(p);
        }

        if (typeCanBo == typeNhanVien)
        {
            p = new NhanVien();
            pCanBo.push_back(p);
        }

        if (p != NULL)     p->nhapThongTinCanBo();
    }
}

void timCanBoTheoTen(const std::vector<CanBo*>& pCanBo, string tenCanBo)
{
    int soCanBo = pCanBo.size();
    for (int i = 0; i < soCanBo; i++)
    {
        string n_ten = pCanBo[i]->getHoTen();
        if (n_ten == tenCanBo)
        {
            pCanBo[i]->xuatThongTinCanBo();
        }
    }
}

void hienThiThongTinDSCB(const std::vector<CanBo*>& pCanBo)
{
    int soCanBo = pCanBo.size();
    cout << "So luong can bo: " << soCanBo << endl;
    for (int i = 0; i < soCanBo; i++)
    {
        pCanBo[i]->xuatThongTinCanBo();
    }
}

#endif // !_QLCB_H_

