#ifndef _EMPLOYEEMANAGEMENT_H_
#define _EMPLOYEEMANAGEMENT_H_
#include"Certificate.h"
#include"Employee.h"
#include"Experience.h"
#include"Fresher.h"
#include"Intern.h"
#include"Library.h"
#include<string>
#include<vector>
#include"CheckValidation.h"

class EmployeeManagement
{
private:
    std::vector<Employee*> employee;
public:
    EmployeeManagement();
    ~EmployeeManagement();
    void addEmployee();
    void modifyEmployeeInfoByID(string id);
    void removeEmployeeByID(string id);
    std::vector<Employee*> GroupbyType(int typeEm);
};


#endif // !_EMPLOYEEMANAGEMENT_H_



