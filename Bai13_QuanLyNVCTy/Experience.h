#ifndef _EXPERIENCE_H_
#define _EXPERIENCE_H_

#include "Employee.h"
class Experience :
    public Employee
{
private:
    int     ExpInYear;
    string  ProSkill;
public:
    Experience();
    Experience(int expYear, string proSkill);
    Experience(Experience& ex);
    ~Experience();
    void setExpInYear(int expYear);
    int getExpInYear();
    void setProSkill(string proSkill);
    string getProSkill();
    int	 getEmployeeType();
    void EnterInfo();
    void ShowInfo();
};
#endif // !_EXPERIENCE_H_


