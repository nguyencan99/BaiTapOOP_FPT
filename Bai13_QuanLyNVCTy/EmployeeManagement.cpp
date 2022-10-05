#include "EmployeeManagement.h"

EmployeeManagement::EmployeeManagement()
{

}
EmployeeManagement::~EmployeeManagement()
{
    for (int i = 0; i < employee.size(); i++)
    {
        delete employee[i];
    }
}
void EmployeeManagement::addEmployee()
{
    int numEmployee;
    int employeeType;
    cout << "Enter the number of employee you want to add: ";
    cin >> numEmployee;
    
    for (int i = 0; i < numEmployee; i++)
    {
        cout << "Choose type of employee: " << endl;
        cout << "1. Experience" << endl;
        cout << "2. Fresher" << endl;
        cout << "3. Intern" << endl;
        cout << "Choose: ";
        cin >> employeeType;

        Employee* pEmp = NULL;

        if (employeeType == TypeExperience)
        {
            pEmp = new Experience();
            employee.push_back(pEmp);
        }

        if (employeeType == TypeFresher)
        {
            pEmp = new Fresher();
            employee.push_back(pEmp);
        }

        if (employeeType == TypeIntern)
        {
            pEmp = new Intern();
            employee.push_back(pEmp);
        }

        if (pEmp != NULL)
        {
            pEmp->EnterInfo();

            char choise;
            cout << "Enter the certificate information (Y/N): ";
            cin >> choise;
            if (choise == 'Y')
            {
                pEmp->EnterCirtificates();
            }
            if (choise == 'N')
            {
                continue;
            }
        }
    }
}
void EmployeeManagement::modifyEmployeeInfoByID(string id)
{
    for (int i = 0; i < employee.size(); i++)
    {
        int choise;
        if (employee[i]->getID() == id)
        {
            int stopFlag = 1;
            while (stopFlag)
            {
                cout << "Emter the information you want to modify: " << endl;
                cout << "1. Full name" << endl;
                cout << "2. Birthday" << endl;
                cout << "3. Phone" << endl;
                cout << "4. Email" << endl;
                cout << "5. Exit" << endl;
                cout << "Choose: ";
                fflush(stdin);
                cin >> choise;
                cin.ignore(32767, '\n');

                switch (choise)
                {
                case 1:
                {
                    //check name
                    string m_FullName;
                    fflush(stdin);
                    cout << "Enter fullname: ";			getline(cin, m_FullName);
                    while (!checkName(m_FullName))
                    {
                        cout << "Enter fullname: ";		getline(cin, m_FullName);
                    }
                    employee[i]->setFullName(m_FullName);
                    break;
                }
                case 2:
                {
                    //check date
                    thoiGian bd;
                    cout << "Enter Birthday: \n";
                    cout << "Enter day: ";				cin >> bd.day;
                    cout << "Enter month: ";			cin >> bd.month;
                    cout << "Enter year: ";				cin >> bd.year;
                    while (!checkDate(bd.day, bd.month, bd.year))
                    {
                        cout << "Enter Birthday: \n";
                        cout << "Enter day: ";			cin >> bd.day;
                        cout << "Enter month: ";		cin >> bd.month;
                        cout << "Enter year: ";			cin >> bd.year;
                    }
                    employee[i]->setBirthday(bd);
                    break;
                }
                case 3:
                {
                    fflush(stdin);
                    string m_phone;
                    cout << "Enter phone: ";			cin >> m_phone;
                    while (!checkPhone(m_phone))
                    {
                        cout << "Enter phone: ";		cin >> m_phone;
                    }
                    employee[i]->setPhone(m_phone);
                    break;
                }
                case 4:
                {
                    fflush(stdin);
                    string m_email;
                    cout << "Enter email: ";			cin >> m_email;
                    while (!checkEmail(m_email))
                    {
                        cout << "Enter email: ";			cin >> m_email;
                    }
                    employee[i]->setEmail(m_email);
                    break;
                }
                case 5:
                {
                    stopFlag = 0;
                    break;
                }
                default:
                    break;
                }
            }
        }
    }
}

void EmployeeManagement::removeEmployeeByID(string id)
{
    for (int i = 0; i < employee.size(); i++)
    {
        if (employee[i]->getID() == id)
        {
            employee.erase(employee.begin() + i);
        }
    }
}

std::vector<Employee*> EmployeeManagement::GroupbyType(int typeEm)
{
    std::vector<Employee*> temp;
    for (int i = 0; i < employee.size(); i++)
    {
        if (employee[i]->getEmployeeType() == typeEm)
        {
            temp.push_back(employee[i]);
        }
    }
    return temp;
}