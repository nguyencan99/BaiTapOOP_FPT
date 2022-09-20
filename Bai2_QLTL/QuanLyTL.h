#include <iostream>
#include "Bao.h"
#include "Sach.h"
#include "TaiLieu.h"
#include "TapChi.h"
#include <vector>


void themMoiTaiLieu(vector<TaiLieu*>& pTaiLieu, int n)
{
    int typeTaiLieu;
    for (int i = 0; i < n; i++)
    {
        cout << "Chon loai tai lieu can nhap: " << endl;
        cout << "1. Sach" << endl;
        cout << "2. Tap chi" << endl;
        cout << "3. Bao" << endl;
        cout << "Chon: ";
        cin >> typeTaiLieu;

        TaiLieu* p = NULL;

        if (typeTaiLieu == typeSach)
        {
            p = new Sach();
            pTaiLieu.push_back(p);
        }

        if (typeTaiLieu == typeTapChi)
        {
            p = new TapChi();
            pTaiLieu.push_back(p);
        }

        if (typeTaiLieu == typeBao)
        {
            p = new Bao();
            pTaiLieu.push_back(p);
        }

        if (p != NULL)     p->nhapThongTinTaiLieu();
    }
}

void xoaTaiLieuTheoMa(vector<TaiLieu*>& pTaiLieu, int maTaiLieu)
{
    int soLuongTaiLieu = pTaiLieu.size();
    for (int i = 0; i < soLuongTaiLieu; i++)
    {
        if (pTaiLieu[i]->getMaTaiLieu() == maTaiLieu)
        {
            pTaiLieu.erase(pTaiLieu.begin()+i);
            break;
        }
    }
}

void hienThiThongTinTaiLieu(const vector<TaiLieu*>& pTaiLieu)
{
    for (int i = 0; i < pTaiLieu.size(); i++)
    {
        pTaiLieu[i]->xuatThongTinTaiLieu();
    }
}

void timKiemTaiLieuTheoLoai(const vector<TaiLieu*>& pTaiLieu, int typeTaiLieu)
{
    vector<TaiLieu*> pTemp;
    for (int i = 0; i < pTaiLieu.size(); i++)
    {
        if (pTaiLieu[i]->getType() == typeTaiLieu)
        {
            pTemp.push_back(pTaiLieu[i]);
        }
    }
    
    hienThiThongTinTaiLieu(pTemp);
}

