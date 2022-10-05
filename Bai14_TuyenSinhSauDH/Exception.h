#ifndef _EXCEPTION_H_
#define _EXCEPTION_H_

#include<iostream>
#include<string>
#include"Library.h"

class InvalidDOBException : public exception
{
private:
    string message;
public:
    InvalidDOBException(string msg) :message(msg) {}
    string what()
    {
        return message;
    }
};


class InvalidPhoneNumberException : public exception
{
public:
    string what()
    {
        return "Invalid phone number!";
    }
};

class GenderException : public exception
{
public:
    string what()
    {
        return "Invalid gender!";
    }
};

class InvalidFullNameException : public exception
{
public:
    string what()
    {
        return "Invalid name!";
    }
};

class OtherException : public exception
{
public:
    string what()
    {
        return "Input files have unknow errors !!!";
    }
};


#endif // !_EXCEPTION_H_



