#ifndef _CERTIFICATE_H_
#define _CERTIFICATE_H_

#include<iostream>
#include<string>
#include "Employee.h"


using namespace std;
class Certificate
{
private:
	int		CertificatedID;
	string	CertificateName;
	int		CertificateRank;
	date	CertificatedDate;
public:
	Certificate();
	Certificate(int Cid, string Cname, int Crank, date Cdate);
	Certificate(Certificate& Cer);
	~Certificate();
	void setCertificatedID(int Cid);
	int getCertificatedID();
	void setCertificateName(string Cname);
	string getCertificateName();
	void setCertificateRank(int Crank);
	int getCertificateRank();
	void setCertificatedDate(date Cdate);
	date getCertificatedDate();
	void EnterCertificateInfo();
	void ShowCertificateInfo();
};

#endif // !_CERTIFICATE_H_



