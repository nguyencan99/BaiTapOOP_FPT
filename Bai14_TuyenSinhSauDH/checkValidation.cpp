#include"checkValidation.h"
#include"Exception.h"

bool checkDate(int day, int month, int year)
{
    try
    {
        if (day <= 0 || day >= 32)
        {
            throw InvalidDOBException("Invalid day!!");
        }
        if (month <= 0 || month >= 13)
        {
            throw InvalidDOBException("Invalid month!!");
        }
        if (year <= 1957 || year >= 2004)
        {
            throw InvalidDOBException("Invalid year!!");
        }
    }
    catch (InvalidDOBException& bdEx)
    {
        cout << bdEx.what() << endl;
        return false;
    }
    return true;
}

bool checkGender(string gender)
{
    try
    {
        if (gender != "male" && gender != "female" && gender != "other")
        {
            throw GenderException();
        }
    }
    catch (GenderException& genderEx)
    {
        cout << genderEx.what() << endl;
        return false;
    }
    return true;
}

bool checkName(string name)
{
    try
    {
        for (auto ch : name)
        {
            if (!is_character(ch) && ch != ' ')
            {
                throw InvalidFullNameException();
            }
        }
        if (name.length() <= 10 || name.length() >= 50)
        {
            throw InvalidFullNameException();
        }
    }
    catch (InvalidFullNameException& nameEx)
    {
        cout << nameEx.what() << endl;
        return false;
    }
    return true;
}

bool checkPhone(string phone)
{
    try
    {
        if (phone.length() != 10)
        {
            throw InvalidPhoneNumberException();
        }
        for (auto ch : phone)
        {
            if (!is_number(ch))
            {
                throw InvalidPhoneNumberException();
            }
        }
        string head[6] = headNumberPhone;
        string headnum = "";
        for (int i=0; i<3;i++)
        {
            headnum += phone[i];
        }
        for (int i = 0; i < 6; i++)
        {
            if (head[i] == headnum)
            {
                return true;
            }
            else
            {
                throw InvalidPhoneNumberException();
            }
        }
    }
    catch (InvalidPhoneNumberException& nameEx)
    {
        cout << nameEx.what() << endl;
        return false;
    }
    return true;
}

bool checkGPA(float gpa)
{
    try
    {
        if (gpa < 0 || gpa>10)
        {
            throw OtherException();
        }
    }
    catch (OtherException& Oex)
    {
        cout << Oex.what() << endl;
        return false;
    }
    return true;
}

bool is_character(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    return false;
}

bool is_number(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return true;
    }
    return false;
}

bool checkToeic(int toeicScore)
{
    try
    {
        if (toeicScore < 0 || toeicScore>990)
        {
            throw OtherException();
        }
    }
    catch (OtherException& Oex)
    {
        cout << Oex.what() << endl;
        return false;
    }
    return true;
}

bool checkNumApplicant(int num)
{
    try
    {
        if (num < 11 || num>15)
        {
            throw OtherException();
        }
    }
    catch (OtherException& oEx)
    {
        cout << oEx.what() << endl;
        return false;
    }
    return true;
}