#include"CheckValidation.h"
#include"Exception.h"

bool checkDate(int day, int month, int year)
{
    try
    {
        if (day <= 0 || day >= 32)
        {
            throw BirthDayException("Invalid day!!");
        }
        if (month <= 0 || month >= 13)
        {
            throw BirthDayException("Invalid month!!");
        }
        if (year <= 1957 || year >= 2004)
        {
            throw BirthDayException("Invalid year!!");
        }
    }
    catch (BirthDayException& bdEx)
    {
        cout << bdEx.what() << endl;
        return false;
    }
    return true;
}

bool checkEmail(string email)
{
    try 
    {
        if (!is_character(email[0]))
        {
            throw EmailException();
        }
        int At = -1, Dot = -1;

        for (int i = 0; i < email.length(); i++)
        {
            // If character is '@'
            if (email[i] == '@')
            {
                At = i;
            }
            // If character is '.'
            else if (email[i] == '.')
            {
                Dot = i;
            }
        }
        // If At or Dot is not present
        if (At == -1 || Dot == -1)
            throw EmailException();

        // If Dot is present before At
        if (At > Dot)
            throw EmailException();

        // If Dot is present at the end
        if (Dot >= (email.length() - 1))
        {
            throw EmailException();
        }
    }
    catch (EmailException& emailEx)
    {
        cout << emailEx.what() << endl;
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
                throw FullNameException();
            }
        }
    }
    catch (FullNameException& nameEx)
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
        if (phone.length() != 9)
        {
            throw FullNameException();
        }
        for (auto ch : phone)
        {
            if (!is_number(ch))
            {
                throw FullNameException();
            }
        }
    }
    catch (FullNameException& nameEx)
    {
        cout << nameEx.what() << endl;
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