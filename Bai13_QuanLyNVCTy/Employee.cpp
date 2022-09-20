#include "Employee.h"

Employee::Employee()
{
	ID				= 0;
	FullName		= " ";
	BirthDay.day	= 0;
	BirthDay.month	= 0;
	BirthDay.year	= 0;
	Phone			= " ";
	Email			= " ";
	Employee_type	= 0;
	Employee_count++;
}
Employee::Employee(int id, string fullName, date birthday, string phone, string email, int eType)
{
	ID				= id;
	FullName		= fullName;
	BirthDay		= birthday;
	Phone			= phone;
	Email			= email;
	Employee_type	= eType;
	Employee_count++;
}
Employee::Employee(Employee& employee)
{
	ID				= employee.ID;
	FullName		= employee.FullName;
	BirthDay		= employee.BirthDay;
	Phone			= employee.Phone;
	Email			= employee.Email;
	Employee_type	= employee.Employee_type;
	Employee_count	= employee.Employee_count;
}
Employee::~Employee()
{

}
void Employee::setID(int id)
{
	ID = id;
}
int	Employee::getID()
{
	return ID;
}
void Employee::setFullName(string fullName)
{
	FullName = fullName;
}
string Employee::getFullName()
{
	return FullName;
}
void Employee::setBirthday(date birthday)
{
	BirthDay = birthday;
}
date Employee::getBirthday()
{
	return BirthDay;
}
void Employee::setPhone(string phone)
{
	Phone = phone;
}
string Employee::getPhone()
{
	return Phone;
}
void Employee::setEmail(string email)
{
	Email = email;
}
string Employee::getEmail()
{
	return Email;
}
void Employee::setEmployeeType(int eType)
{
	Employee_type = eType;
}
int	 Employee::getEmployeeType()
{
	return Employee_type;
}
void Employee::EnterInfo()
{
	cout << "________________INFORMATION__________________" << endl;
	cout << "___________ ENTER EMPLOYEE IMFORMATION:___________" << endl;
	cout << "Enter ID: ";				cin >> ID;		
	cin.ignore(32767, '\n');
	cout << "Enter fullname: ";			getline(cin, FullName);
	cout << "Enter Birthday: ";			cin >> BirthDay.day, BirthDay.month,BirthDay.year;
	cin.ignore(32767, '\n');
	cout << "Enter phone: ";			cin >> FullName;
	cout << "Enter email: ";			cin >> Email;
	cout << "Enter employee type: ";	cin >> Employee_type;
}
void Employee::ShowInfo()
{
	cout << "________________INFORMATION__________________" << endl;
	cout << "___________ SHOW EMPLOYEE IMFORMATION:___________" << endl;
	cout << "ID: "			  << ID				<< endl;
	cout << "Fullname: "	  << FullName		<< endl;
	cout << "Birthday: "	  << BirthDay.day << "/" << BirthDay.month << "/" << BirthDay.year << endl;
	cout << "Phone: "		  << Phone			<< endl;
	cout << "Email: "		  << Email			<< endl;
	cout << "Employee type: " << Employee_type	<< endl;
}