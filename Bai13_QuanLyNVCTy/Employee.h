#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include<iostream>
#include<string>

using namespace std;
struct date
{
	int day;
	int month;
	int year;
};
enum employeeType
{
	Experience,
	Fresher, 
	Intern,
};

class Employee
{
private:
	int			ID;
	string		FullName;
	date		BirthDay;
	string		Phone;
	string		Email;
	int			Employee_type;
	static int	Employee_count;//@@
public:
	Employee();
	Employee(int ID, string	FullName, date BirthDay, string Phone, string Email, int Employee_type);
	Employee(Employee& employee);
	~Employee();
	void	setID(int id);
	int		getID();
	void	setFullName(string fullName);
	string	getFullName();
	void	setBirthday(date birthday);
	date	getBirthday();
	void	setPhone(string phone);
	string	getPhone();
	void	setEmail(string email);
	string	getEmail();
	void	setEmployeeType(int eType);
	virtual int		getEmployeeType();
	virtual void	EnterInfo();
	virtual void	ShowInfo();
};

#endif // !_EMPLOYEE_H_



