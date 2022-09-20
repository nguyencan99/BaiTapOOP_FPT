#ifndef _INTER_H_
#define _INTER_H_

#include "Employee.h"
class Intern :
    public Employee
{
private:
    string  Majors;
    int     Semester;
    string  University_name;
public:
    Intern();
    Intern(string majors, int semester, string university);
    Intern(Intern& intern);
    ~Intern();
    void setMajors(string majors);
    string getMajors();
    void setSemester(int semester);
    int getSemester();
    void setUniversity(string university);
    string getUniversity();
    void EnterInfo();
    void ShowInfo();
};
#endif // !_INTER_H_



