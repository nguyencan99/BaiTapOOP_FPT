#include<iostream>
#include<string>
#include"Certificate.h"
#include"EmployeeManagement.h"

using namespace std;

int main()
{
    EmployeeManagement emMan;
    bool stopFlag = 1;
    int option = 0;
    while (stopFlag)
    {
        cout << "______________EMPLOYEE MANAGEMENT PROGRAM_______________" << endl;
        cout << "1. Add employees" << endl;
        cout << "2. Modify employee's information by ID" << endl;
        cout << "3. Delete employees by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter the option: ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            cout << "1. Add employees" << endl;
            emMan.addEmployee();
            break;
        }
        case 2:
        {
            string id;
            cout << "2. Modify employee's information by ID" << endl;
            cout << "Enter employee's ID: ";
            cin >> id;
            emMan.modifyEmployeeInfoByID(id);
            break;
        }
        case 3:
        {
            string id;
            cout << "3. Delete employees by ID" << endl;
            cout << "Enter employee's ID: ";
            cin >> id;
            emMan.removeEmployeeByID(id);
            break;
        }
        case 4:
        {
            stopFlag = 0;
            break;
        }
        default:
            break;
        }

    }

    return 0;

}