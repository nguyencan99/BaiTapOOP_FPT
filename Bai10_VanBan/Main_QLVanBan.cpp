#include"VanBan.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int charCount = 0, wordCount = 0;

    cout << "Nhap doan van ban:";
    getline(cin, str);

    VanBan vbA(str);
    charCount=vbA.demSoKyTu();
    wordCount = vbA.demSoTu();
    vbA.chuanHoaVanBan();
    str = vbA.getString();
    cout << str << endl;
}