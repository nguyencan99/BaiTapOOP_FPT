#ifndef _CERTIFICATE_H_
#define _CERTIFICATE_H_

#include<iostream>
#include<string>
#include"Library.h"

using namespace std;
class Certificate
{
private:
	int			CertificatedID;
	string		CertificateName;
	int			CertificateRank;
	thoiGian	CertificatedDate;
public:
	Certificate();
	Certificate(int Cid, string Cname, int Crank, thoiGian Cdate);
	Certificate(const Certificate& Cer);
	Certificate(Certificate&& Cer);
	~Certificate();
	void setCertificatedID(int Cid);
	int getCertificatedID();
	void setCertificateName(string Cname);
	string getCertificateName();
	void setCertificateRank(int Crank);
	int getCertificateRank();
	void setCertificatedDate(thoiGian Cdate);
	thoiGian getCertificatedDate();
	void EnterCertificateInfo();
	void ShowCertificateInfo();
};

#endif // !_CERTIFICATE_H_



