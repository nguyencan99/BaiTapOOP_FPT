#ifndef _FRESHER_H_
#define _FRESHER_H_
#include "Employee.h"
class Fresher :
    public Employee
{
private:
    date    Graduation_date;
    int     Graduation_rank;
    string  Education;
public:
    Fresher();
    Fresher(date G_date, int G_rank, string edu);
    Fresher(Fresher& fresher);
    ~Fresher();
    void setGraduationDate(date G_date);
    date getGraduationDate();
    void setGraduationRank(int G_rank);
    int getGraduationRank();
    void setEducation(string edu);
    string getEducation();
    void EnterInfo();
    void ShowInfo();
};

#endif // !_FRESHER_H_



