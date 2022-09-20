#include "VanBan.h"
#include<vector>
#include<iostream>

using namespace std;

VanBan::VanBan()
{
    chuoiKyTu = "";
}
VanBan::VanBan(string str)
{
    chuoiKyTu = str;
}

void VanBan::setString(string str)
{
    chuoiKyTu = str;
}

string VanBan::getString()
{
    return chuoiKyTu;
}

int VanBan::demSoTu()
{
    if (chuoiKyTu.empty())  return 0;

    std::vector<string> listTu;
    string tu;

    for (auto x : chuoiKyTu)
    {
        if (x == ' ')
        {
            if (!tu.empty())
            {
                listTu.push_back(tu);
                tu = "";
            }
        }
        else {
            tu = tu + x;
        }
    }
    return listTu.size();
}
int VanBan::demSoKyTu()
{
    int coutChar=0;

    if (chuoiKyTu.empty())  return 0;

    for (auto x : chuoiKyTu)
    {
        if (x == ' '|| x=='\0')
        {
            continue;
        }
        else {
            coutChar++;
        }
    }
    return coutChar;
}
void VanBan::chuanHoaVanBan()
{
    if (chuoiKyTu.empty())
    {
        cout << "Chuoi rong!!" << endl;
    }
    else
    {
        string tempStr;
        int count = 0;
        // xoa nhieu dau cach lien ke ve 1 dau cach
        for (auto x : chuoiKyTu)
        {
            if (x == ' ')
            {
                count++;
                if (count == 2)
                {
                    count = 1;
                    continue;
                }
            }
            else {
                if (count==1)
                {
                    tempStr = tempStr + " ";
                    count = 0;
                }
                tempStr = tempStr + x;
            }
        }

        //xoa dau cach o dau chuoi
        if (tempStr[0] == ' ') 
        {
            tempStr.erase(tempStr.begin());
        }

        // xoa dau cach cuoi chuoi
        if (tempStr[tempStr.size() - 1] == ' ')
        {
            tempStr.erase(tempStr.end()-1);
        }

        // tra ve chuoi van ban duoc chuan hoa
        chuoiKyTu = tempStr;
    }
}