#ifndef _EXCEPTION_H_
#define _EXCEPTION_H_

#include<iostream>
#include<string>
#include"Library.h"

class BirthDayException : public exception
{
private:
    string message;
public:
    BirthDayException(string msg) :message(msg) {}
    string what()
    {
        return message;
    }
};


class PhoneException : public exception
{
public:
    string what()
    {
        return "Invalid phone number!";
    }
};

class EmailException : public exception
{
public:
    string what()
    {
        return "Invalid email!";
    }
};

class FullNameException : public exception
{
public:
    string what()
    {
        return "Invalid name!";
    }
};

#endif // !_EXCEPTION_H_



