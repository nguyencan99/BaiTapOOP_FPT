#ifndef _NORMALSTUDENT_H_
#define _NORMALSTUDENT_H_

#include<iostream>
#include<string>
#include"Library.h"
#include"checkValidation.h"
#include"Student.h"

using namespace std;

class NormalStudent : public Student
{
private:
	int		englishScore;
	int		entryTestScore;

public:
	NormalStudent();
	NormalStudent(int EngScore, int eTestScore);
	NormalStudent(NormalStudent& st);
	~NormalStudent();
	void setEnglishScore(int EngScore);
	int	getEnglishScore();
	void setEntryTestScore(int eTestScore);
	int	getEntryTestScore();
	int	 getGradeType();
	void EnterMyInfor();
	void ShowMyInfor();

};
#endif // !_NORMALSTUDENT_H_
