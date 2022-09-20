#include "QuanLyTT_ThiSinh.h"


int main()
{
    bool stopFlog = 1;
    int option = 0;
    std::vector<ThiSinh*> pThiSinh;

    while (stopFlog)
    {
        cout << "_____________ HE THONG QUAN LY THONG TIN THI SINH _____________" << endl;
        cout << "1. Them moi thi sinh." << endl;
        cout << "2. Hien thi thong tin cuar thi sinh va khoi thi." << endl;
        cout << "3. Tim kiem thi sinh theo so bao danh" << endl;
        cout << "4. Thoat khoi chuong trinh" << endl;

        cout << "Chon yeu cau can thuc hien!! " << endl;
        cin >> option;  cin.ignore(32767, '\n');

        switch (option)
        {
        case 1:
        {
            int n = 0;
            cout << "1. Them moi thi sinh." << endl;

            cout << "Nhap so luong thi sinh nhap moi: ";
            cin >> n;
            themMoiThiSinh(pThiSinh, n);
            break;
        }
        case 2:
        {
            cout << "2. Hien thi thong tin cua thi sinh va khoi thi." << endl;
            hienThiThongTinThiSinh(pThiSinh);
            break;
        }
        case 3:
            int SBD;
            cout << "3. Tim kiem thi sinh theo so bao danh" << endl;
            cout << "Nhap so bao danh cua thi sinh can tim: ";
            cin >> SBD;
            timKiemThiSinhTheoSBD(pThiSinh, SBD);
            break;
        case 4:
            cout << "4. Thoat khoi chuong trinh" << endl;
            stopFlog = false;
            break;
        default:
            break;
        }
    }

    return 0;
}