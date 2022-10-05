#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>
#include<string>
#include"Library.h"
#include"checkValidation.h"

using namespace std;

class Student
{
private:
	string		fullName;
	thoiGian	doB;
	string		sex;
	string		phoneNumber;
	int			gradeLevel;

public:
	Student();
	Student( string fName, thoiGian birthday, string sex, string phone, int gLevel);
	Student(Student& st);
	virtual ~Student();
	void	setFullName(string fullName);
	string	getFullName();
	void	setBirthday(thoiGian birthday);
	thoiGian getBirthday();
	void	setSex(string sex);
	string	getSex();
	void	setPhone(string phone);
	string	getPhone();
	virtual int		getGradeType() = 0;
	virtual void	EnterMyInfor();
	virtual void	ShowMyInfor ();
};
#endif // !_STUDENT_H_



