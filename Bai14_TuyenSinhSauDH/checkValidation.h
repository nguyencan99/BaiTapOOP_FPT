#ifndef _CHECKVALIDATION_H_
#define _CHECKVALIDATION_H_
#include<iostream>
#include<string>
#include"Library.h"

using namespace std;

bool checkDate(int day, int month, int year);
bool checkGender(string email);
bool checkName(string name);
bool checkPhone(string phone);
bool is_character(char ch);
bool is_number(char ch);
bool checkGPA(float gpa);
bool checkToeic(int toeicScore);
bool checkNumApplicant(int num);


#endif // !_CHECKVALIDATION_H_
