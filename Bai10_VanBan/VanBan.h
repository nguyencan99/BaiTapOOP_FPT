#ifndef _VANBAN_H_
#define _VANBAN_H_

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
class VanBan
{
private:
    string chuoiKyTu;
public:
    VanBan();
    VanBan(string str);
    void setString(string str);
    string getString();
    int demSoTu();
    int demSoKyTu();
    void chuanHoaVanBan();
};
#endif // !_VANBAN_H_



