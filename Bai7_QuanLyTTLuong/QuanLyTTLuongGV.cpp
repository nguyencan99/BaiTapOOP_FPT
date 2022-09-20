#include<iostream>
#include<stdio.h>
#include<string.h>
#include <vector>
#include "Nguoi.h"
#include "CBGV.h"

using namespace std;

void themCBGV(std::vector<CBGV*>& pGV, int n)
{
    for (int i = 0; i < n; i++)
    {
        CBGV* gv = new CBGV();
        gv->nhapThongTinGV();
        pGV.push_back(gv);
    }
}

void xoaCBGV(std::vector<CBGV*>& pGV, int maSoGV)
{
    for (int i = 0; i < pGV.size(); i++)
    {
        if (pGV[i]->getMaSoGV()==maSoGV)
        {
            pGV.erase(pGV.begin() + i);
        }
    }
}

void xuatBangLuongThucLinh(const std::vector<CBGV*>& pGV)
{
    for (int i = 0; i < pGV.size(); i++)
    {
        pGV[i]->tinhLuongThucLinh();
        pGV[i]->xuatThongTinGV();
    }
}
int main()
{
    std::vector<CBGV*> pgv;
    int soGV;
    int maSoGV;
    cout << "Nhap so luong giao vien can them: ";
    cin >> soGV;
    themCBGV(pgv, soGV);

    cout << "Nhap ma so  giao vien can xoa: ";
    cin >> maSoGV;
    xoaCBGV(pgv, maSoGV);

    for (int i = 0; i < pgv.size(); i++)
    {
        pgv[i]->xuatThongTinGV();
    }
}