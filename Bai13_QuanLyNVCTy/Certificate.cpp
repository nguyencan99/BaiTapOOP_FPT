#include "Certificate.h"

Certificate::Certificate()
{
	CertificatedID			= 0;
	CertificateName			= " ";
	CertificateRank			= 0;
	CertificatedDate.day	= 0;
	CertificatedDate.month	= 0;
	CertificatedDate.year	= 0;
}
Certificate::Certificate(int Cid, string Cname, int Crank, date Cdate)
{
	CertificatedID		= Cid;
	CertificateName		= Cname;
	CertificateRank		= Crank;
	CertificatedDate	= Cdate;
}
Certificate::Certificate(Certificate& Cer)
{
	CertificatedID		= Cer.CertificatedID;
	CertificateName		= Cer.CertificateName;
	CertificateRank		= Cer.CertificateRank;
	CertificatedDate	= Cer.CertificatedDate;
}
Certificate::~Certificate()
{

}
void Certificate::setCertificatedID(int Cid)
{
	CertificatedID = Cid;
}
int Certificate::getCertificatedID()
{
	return CertificatedID;
}
void Certificate::setCertificateName(string Cname)
{
	CertificateName = Cname;
}
string Certificate::getCertificateName()
{
	return CertificateName;
}
void Certificate::setCertificateRank(int Crank)
{
	CertificateRank = Crank;
}
int Certificate::getCertificateRank()
{
	return CertificateRank;
}
void Certificate::setCertificatedDate(date Cdate)
{
	CertificatedDate = Cdate;
}
date Certificate::getCertificatedDate()
{
	return CertificatedDate;
}
void Certificate::EnterCertificateInfo()
{
	cout << "________________INFORMATION__________________" << endl;
	cout << "___________ ENTER CERTIFICATE IMFORMATION:___________" << endl;
	cout << "Enter CertificatedID: ";	cin >> CertificatedID;
	cin.ignore(32767, '\n');
	cout << "Enter CertificateName: ";	getline(cin, CertificateName);
	cout << "Enter CertificateRank: ";	cin >> CertificateRank;
	cout << "Enter CertificateDate: ";	cin >> CertificatedDate.day, CertificatedDate.month, CertificatedDate.year;
}
void Certificate::ShowCertificateInfo()
{
	cout << "________________INFORMATION__________________" << endl;
	cout << "___________ SHOW CERTIFICATE IMFORMATION:___________" << endl;
	cout << "CertificatedID: "   << CertificatedID  << endl;
	cout << "CertificateName: "  << CertificateName << endl;
	cout << "CertificateRank: "  << CertificateRank << endl;
	cout << "CertificatedDate: " << CertificatedDate.day << "/" << CertificatedDate.month << "/" << CertificatedDate.year << endl;
}