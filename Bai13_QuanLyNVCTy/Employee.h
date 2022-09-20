#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include<iostream>
#include<string>
#include<vector>
#include "Certificate.h"
#include"Library.h"


using namespace std;

class Employee/*: public Certificate*/
{
private:
	string			ID;
	string		FullName;
	thoiGian		BirthDay;
	string		Phone;
	string		Email;
	int			Employee_type;
	//static int	Employee_count;//@@
	//std::vector<Certificate> Certi;
public:
	Employee();
	Employee(string id, string fullName, thoiGian birthday, string phone, string email, int eType);
	Employee(Employee& employee);
	virtual ~Employee();
	void	setID(string id);
	string		getID();
	void	setFullName(string fullName);
	string	getFullName();
	void	setBirthday(thoiGian birthday);
	thoiGian	getBirthday();
	void	setPhone(string phone);
	string	getPhone();
	void	setEmail(string email);
	string	getEmail();
	//static int getEmployeeCount();
	virtual int		getEmployeeType()=0;
	virtual void	EnterInfo();
	virtual void	ShowInfo();
	//virtual void    EnterCirtificates();
	//virtual void    ShowCertificates();
};

#endif // !_EMPLOYEE_H_



