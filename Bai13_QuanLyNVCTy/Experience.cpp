#include "Experience.h"

Experience::Experience()
{
	ExpInYear = 0;
	ProSkill  = " ";
}
Experience::Experience(int expYear, string proSkill)
{
	ExpInYear = expYear;
	ProSkill  = proSkill;
}
Experience::Experience(Experience& ex)
{
	ExpInYear = ex.ExpInYear;
	ProSkill  = ex.ProSkill;
}
Experience::~Experience()
{

}
void Experience::setExpInYear(int expYear)
{
	ExpInYear = expYear;
}
int Experience::getExpInYear()
{
	return ExpInYear;
}
void Experience::setProSkill(string proSkill)
{
	ProSkill = proSkill;
}
string Experience::getProSkill()
{
	return ProSkill;
}
int	 Experience::getEmployeeType()
{
	return TypeExperience;
}
void Experience::EnterInfo()
{
	Employee::EnterInfo();
	cout << "Enter Experience In Year: ";	cin >> ExpInYear;
	cin.ignore(32767, '\n');
	cout << "Enter skills: ";				getline(cin, ProSkill);
}
void Experience::ShowInfo()
{
	Employee::ShowInfo();
	cout << "Experience In Year: "	<< ExpInYear << endl;
	cout << "Professional Skills: " << ProSkill << endl;
}