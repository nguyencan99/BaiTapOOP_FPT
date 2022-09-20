#ifndef _QUANLYTTTS_H_
#define _QUANLYTTTS_H_

#include <iostream>
#include <vector>
#include "ThiSinh.h"
#include "ThiSinhKhoiA.h"
#include "ThiSinhKhoiB.h"
#include "ThiSinhKhoiC.h"

void themMoiThiSinh(vector<ThiSinh*>& pThiSinh, int n)
{
    int typeKhoiThi;
    for (int i = 0; i < n; i++)
    {
        cout << "Chon thong tin thi sinh: " << endl;
        cout << "1. Khoi A" << endl;
        cout << "2. Khoi B" << endl;
        cout << "3. Khoi C" << endl;
        cout << "Chon: ";
        cin >> typeKhoiThi;

        ThiSinh* p = NULL;

        if (typeKhoiThi == khoiA)
        {
            p = new ThiSinhKhoiA();
            pThiSinh.push_back(p);
        }

        if (typeKhoiThi == khoiB)
        {
            p = new ThiSinhKhoiB();
            pThiSinh.push_back(p);
        }

        if (typeKhoiThi == khoiC)
        {
            p = new ThiSinhKhoiC();
            pThiSinh.push_back(p);
        }

        if (p != NULL)     p->nhapThongTinThiSinh();
    }
}

void hienThiThongTinThiSinh(const vector<ThiSinh*>& pThiSinh)
{
    for (int i = 0; i < pThiSinh.size(); i++)
    {
            pThiSinh[i]->xuatThongTinThiSinh();
            if (pThiSinh[i]->getType() == khoiA)
            {
                cout << "Khoi du thi: Khoi A." << endl;
            }
            else if (pThiSinh[i]->getType() == khoiB)
            {
                cout << "Khoi du thi: Khoi B." << endl;
            }
            else if (pThiSinh[i]->getType() == khoiC)
            {
                cout << "Khoi du thi: Khoi C." << endl;
            }
            else
                break;
    }
}

void timKiemThiSinhTheoSBD(const vector<ThiSinh*>& pThiSinh, int SBD)
{
    for (int i = 0; i < pThiSinh.size(); i++)
    {
        if (pThiSinh[i]->getSoBaoDanh() == SBD)
        {
            pThiSinh[i]->xuatThongTinThiSinh();
        }
    }
}
#endif // !_QUANLYTTTS_H_




