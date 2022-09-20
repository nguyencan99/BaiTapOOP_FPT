#ifndef _FRESHER_H_
#define _FRESHER_H_
#include "Employee.h"
class Fresher :
    public Employee
{
private:
    thoiGian   Graduation_date;
    int        Graduation_rank;
    string     Education;
public:
    Fresher();
    Fresher(thoiGian G_date, int G_rank, string edu);
    Fresher(Fresher& fresher);
    ~Fresher();
    void setGraduationDate(thoiGian G_date);
    thoiGian getGraduationDate();
    void setGraduationRank(int G_rank);
    int getGraduationRank();
    void setEducation(string edu);
    string getEducation();
    int	getEmployeeType();
    void EnterInfo();
    void ShowInfo();
};

#endif // !_FRESHER_H_



