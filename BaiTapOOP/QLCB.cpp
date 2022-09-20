#include "QLCB.h"
#include <vector>


int main()
{
    bool stopFlog = 1;
    int option = 0;
    std::vector<CanBo*> pCanBo;

    while (stopFlog)
    {
        cout << "_____________ HE THONG QUAN LY CAN BO _____________" << endl;
        cout << "1. Nhap moi can bo" << endl;
        cout << "2. Tim can bo theo ho ten" << endl;
        cout << "3. Hien thi thong tin ve danh sach can bo" << endl;
        cout << "4. Thoat khoi chuong trinh" << endl;

        cout << "Chon yeu cau can thuc hien: " ;
        cin >> option;
        cin.ignore(32767, '\n');

        switch (option)
        {
        case 1:
        {
            int n = 0;
            cout << "1. Nhap moi can bo" << endl;
            
            cout << "Nhap so luong can bo nhap moi: ";
            cin >> n;
            cin.ignore(32767, '\n');
            themMoiCanBo(pCanBo, n);
            break;
        }
        case 2:
        {
            string tenCanBo=" ";

            cout << "2. Tim can bo theo ho ten." << endl;
            cout << "Nhap ho va ten can bo: ";
            fflush(stdin); fflush(stdin);
            getline(cin, tenCanBo); 
            timCanBoTheoTen(pCanBo, tenCanBo);
            break;
        }
        case 3:
            cout << "3. Hien thi thong tin ve danh sach can bo" << endl;
            hienThiThongTinDSCB(pCanBo);
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