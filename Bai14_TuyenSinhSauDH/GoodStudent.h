#ifndef _GOODSTUDENT_H_
#define _GOODSTUDENT_H_

#include<iostream>
#include<string>
#include"Library.h"
#include"checkValidation.h"
#include"Student.h"

using namespace std;

class GoodStudent: public Student
{
private:
	float		GPA;
	string		bestRewardName;

public:
	GoodStudent();
	GoodStudent(float gpa, string bestRW);
	GoodStudent(GoodStudent& st);
	~GoodStudent();
	void	setGPA(float gpa);
	float	getGPA();
	void	setBestReward(string RWname);
	string	getBestReward();
	int		getGradeType();
	void	EnterMyInfor();
	void	ShowMyInfor();

};
#endif // !_GOODSTUDENT_H_
