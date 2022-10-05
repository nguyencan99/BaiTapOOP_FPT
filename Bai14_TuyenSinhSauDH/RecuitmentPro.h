#ifndef _RECUITMENTPRO_H_
#define _RECUITMENTPRO_H_

#include<iostream>
#include<string>
#include<vector>
#include"GoodStudent.h"
#include"NormalStudent.h"
#include"Student.h"


using namespace std;
class RecuitmentPro
{
private:
	vector<Student*> pStd;
public:
	RecuitmentPro();
	~RecuitmentPro();
	void enterApplicantInfor();
	void showApplicantInfor();
	void applicantSelect(int numRecruit);
	void arrangeGoodStudent();
	void arrangeNormalStudent();
};



#endif // _RECUITMENTPRO_H_
