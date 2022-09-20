#include "Intern.h"
#include<string>
#include<iostream>

using namespace std;

Intern::Intern()
{
	Majors			= " ";
	Semester		= 0;
	University_name = " ";
}
Intern::Intern(string majors, int semester, string university)
{
	Majors			= majors;
	Semester		= semester;
	University_name = university;
}
Intern::Intern(Intern& intern)
{
	Majors			= intern.Majors;
	Semester		= intern.Semester;
	University_name = intern.University_name;
}
Intern::~Intern()
{

}
void Intern::setMajors(string majors)
{
	Majors = majors;
}
string Intern::getMajors()
{
	return Majors;
}
void Intern::setSemester(int semester)
{
	Semester = semester;
}
int Intern::getSemester()
{
	return Semester;
}
void Intern::setUniversity(string university)
{
	University_name = university;
}
string Intern::getUniversity()
{
	return University_name;
}

int	 Intern::getEmployeeType()
{
	return TypeIntern;
}
void Intern::EnterInfo()
{
	Employee::EnterInfo();
	cin.ignore(32767, '\n');
	cout << "Enter Majors: ";			getline(cin, Majors);
	cout << "Enter semester: ";			cin >> Semester;
	cin.ignore(32767, '\n');
	cout << "Enter university name: ";	getline(cin, University_name);
}
void Intern::ShowInfo()
{
	Employee::ShowInfo();
	cout << "Majors: "			<< Majors			<< endl;
	cout << "Semester: "		<< Semester			<< endl;
	cout << "University name: " << University_name	<< endl;
}