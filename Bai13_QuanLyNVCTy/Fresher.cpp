#include "Fresher.h"
#include<string>
#include<iostream>

using namespace std;

Fresher::Fresher()
{
	Graduation_date.day		= 0;
	Graduation_date.month	= 0;
	Graduation_date.year	= 0;
	Graduation_rank			= 0;
	Education				= " ";
}
Fresher::Fresher(date G_date, int G_rank, string edu)
{
	Graduation_date = G_date;
	Graduation_rank = G_rank;
	Education		= edu;
}
Fresher::Fresher(Fresher& fresher)
{
	Graduation_date = fresher.Graduation_date;
	Graduation_rank = fresher.Graduation_rank;
	Education		= fresher.Education;
}
Fresher::~Fresher()
{

}
void Fresher::setGraduationDate(date G_date)
{
	Graduation_date = G_date;
}
date Fresher::getGraduationDate()
{
	return Graduation_date;
}
void Fresher::setGraduationRank(int G_rank)
{
	Graduation_rank = G_rank;
}
int Fresher::getGraduationRank()
{
	return Graduation_rank;
}
void Fresher::setEducation(string edu)
{
	Education = edu;
}
string Fresher::getEducation()
{
	return Education;
}
void Fresher::EnterInfo()
{
	Employee::EnterInfo();
	cout << "Enter graduation date: ";	cin >> Graduation_date.day, Graduation_date.month, Graduation_date.year;
	cin.ignore(32767, '\n');
	cout << "Enter graduation rank: ";	cin >> Graduation_rank;
	cin.ignore(32767, '\n');
	cout << "Enter education: ";		getline(cin, Education);
}
void Fresher::ShowInfo()
{
	Employee::ShowInfo();
	cout << "Graduation date: " << Graduation_date.day << "/" << Graduation_date.month << "/" << Graduation_date.year << endl;
	cout << "Graduation rank: " << Graduation_rank	<< endl;
	cout << "Education: "		<< Education		<< endl;
}