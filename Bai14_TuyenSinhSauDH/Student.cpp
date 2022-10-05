#include "Student.h"

Student::Student()
{
	fullName = " ";
	doB.day = 0;
	doB.month = 0;
	doB.year = 0;
	sex=" ";
	phoneNumber = " ";
	gradeLevel = 0;
}
Student::Student(string fName, thoiGian birthday, string gender, string phone, int gLevel)
{
	fullName = fName;
	doB = birthday;
	sex = gender;
	phoneNumber = phone;
	gradeLevel = gLevel;
}
Student::Student(Student& st)
{
	fullName = st.fullName;
	doB = st.doB;
	sex = st.sex;
	phoneNumber = st.phoneNumber;
	gradeLevel = st.gradeLevel;
}
Student::~Student()
{

}
void	Student::setFullName(string fName)
{
	fullName = fName;
}
string	Student::getFullName()
{
	return fullName;
}
void	Student::setBirthday(thoiGian birthday)
{
	doB = birthday;
}
thoiGian Student::getBirthday()
{
	return doB;
}
void	Student::setSex(string gender)
{
	sex = gender;
}
string Student::getSex()
{
	return sex;
}
void	Student::setPhone(string phone)
{
	phoneNumber = phone;
}
string Student::getPhone()
{
	return phoneNumber;
}
void Student::EnterMyInfor()
{
	cout << "________________INFORMATION__________________" << endl;
	cout << "___________ ENTER STUDENT IMFORMATION:___________" << endl;

	//check name
	cout << "Enter fullname: ";			getline(cin, fullName);
	while (!checkName(fullName))
	{
		cout << "Enter fullname: ";		getline(cin, fullName);
	}

	//check date
	cout << "Enter Birthday: \n";
	cout << "Enter day: ";				cin >> doB.day;
	cout << "Enter month: ";			cin >> doB.month;
	cout << "Enter year: ";				cin >> doB.year;
	while (!checkDate(doB.day, doB.month, doB.year))
	{
		cout << "Enter Birthday: \n";
		cout << "Enter day: ";			cin >> doB.day;
		cout << "Enter month: ";		cin >> doB.month;
		cout << "Enter year: ";			cin >> doB.year;
	}
	cin.ignore(32767, '\n');

	//check gender
	cout << "Enter gender: ";			cin >> sex;
	while (!checkGender(sex))
	{
		cout << "Enter gender: ";			cin >> sex;
	}
	//check phone
	cout << "Enter phone: ";			cin >> phoneNumber;
	while (!checkPhone(phoneNumber))
	{
		cout << "Enter phone: ";		cin >> phoneNumber;
	}

}
void Student::ShowMyInfor ()
{
	cout << "________________INFORMATION__________________" << endl;
	cout << "___________ SHOW STUDENT IMFORMATION:___________" << endl;
	cout << "Fullname: " << fullName << endl;
	cout << "Birthday: " << doB.day << "/" << doB.month << "/" << doB.year << endl;
	cout << "Gender: " << sex << endl;
	cout << "Phone: " << phoneNumber << endl;
	cout << "Student type: ";
	if (gradeLevel == typeGood)
	{
		cout << " Good " << endl;
	}
	if (gradeLevel == TypeNormal)
	{
		cout << " Normal " << endl;
	}
}
