#include "Employee.h"
#include "CheckValidation.h"

Employee::Employee()
{
	ID				= " ";
	FullName		= " ";
	BirthDay.day	= 0;
	BirthDay.month	= 0;
	BirthDay.year	= 0;
	Phone			= " ";
	Email			= " ";
	Employee_type	= 0;
	//Employee_count++;
}
Employee::Employee(string id, string fullName, thoiGian birthday, string phone, string email, int eType)
{
	ID				= id;
	FullName		= fullName;
	BirthDay		= birthday;
	Phone			= phone;
	Email			= email;
	Employee_type	= eType;
	//Employee_count++;
}
Employee::Employee(Employee& employee)
{
	ID				= employee.ID;
	FullName		= employee.FullName;
	BirthDay		= employee.BirthDay;
	Phone			= employee.Phone;
	Email			= employee.Email;
	Employee_type	= employee.Employee_type;
	//Employee_count++;
}
Employee::~Employee()
{

}
void Employee::setID(string id)
{
	ID = id;
}
string	Employee::getID()
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
void Employee::setBirthday(thoiGian birthday)
{
	BirthDay = birthday;
}
thoiGian Employee::getBirthday()
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

//int Employee::getEmployeeCount()
//{
//	return Employee_count;
//}

void Employee::EnterInfo()
{
	cout << "________________INFORMATION__________________" << endl;
	cout << "___________ ENTER EMPLOYEE IMFORMATION:___________" << endl;
	cout << "Enter ID: ";				cin >> ID;		
	cin.ignore(32767, '\n');

	//check name
	cout << "Enter fullname: ";			getline(cin, FullName);
	while (!checkName(FullName))
	{
		cout << "Enter fullname: ";			getline(cin, FullName);
	}

	//check date
	cout << "Enter Birthday: \n";
	cout << "Enter day: ";				cin >> BirthDay.day;
	cout << "Enter month: ";			cin >> BirthDay.month;
	cout << "Enter year: ";				cin >> BirthDay.year;
	while (!checkDate(BirthDay.day, BirthDay.month, BirthDay.year))
	{
		cout << "Enter Birthday: \n";
		cout << "Enter day: ";			cin >> BirthDay.day;
		cout << "Enter month: ";		cin >> BirthDay.month;
		cout << "Enter year: ";			cin >> BirthDay.year;
	}
	cin.ignore(32767, '\n');

	//check phone
	cout << "Enter phone: ";			cin >> Phone;
	while (!checkPhone(Phone))
	{
		cout << "Enter phone: ";		cin >> Phone;
	}

	//check mail
	cout << "Enter email: ";			cin >> Email;
	while (!checkEmail(Email))
	{
		cout << "Enter email: ";			cin >> Email;
	}

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

//void Employee::EnterCirtificates()
//{
//	int num_Certi;
//	
//	cout << "Enter the number of certificates you submit: ";
//	cin >> num_Certi;
//	for (int i = 0; i < num_Certi; i++)
//	{
//		Certificate p_Certi;
//		p_Certi.EnterCertificateInfo();
//		Certi.push_back(p_Certi);
//	}
//}
//
//void Employee::ShowCertificates()
//{
//	for (int i = 0; i < Certi.size(); i++)
//	{
//		Certi[i].ShowCertificateInfo();
//	}
//}
