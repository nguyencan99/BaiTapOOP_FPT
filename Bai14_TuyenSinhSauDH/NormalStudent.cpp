#include"NormalStudent.h"

NormalStudent::NormalStudent()
{
    englishScore = 0;
    entryTestScore = 0;
}
NormalStudent::NormalStudent(int EngScore, int eTestScore)
{
    englishScore = EngScore;
    entryTestScore = eTestScore;
}
NormalStudent::NormalStudent(NormalStudent& st)
{
    englishScore = st.englishScore;
    entryTestScore = st.entryTestScore;
}
NormalStudent::~NormalStudent()
{

}
void NormalStudent::setEnglishScore(int EngScore)
{
    englishScore = EngScore;
}
int NormalStudent::getEnglishScore()
{
    return englishScore;
}
void NormalStudent::setEntryTestScore(int eTestScore)
{
    entryTestScore = eTestScore;
}
int NormalStudent::getEntryTestScore()
{
    return entryTestScore;
}
int NormalStudent::getGradeType()
{
    return typeGood;
}
void NormalStudent::EnterMyInfor()
{
    Student::EnterMyInfor();

    cout << "Enter English Score: "; cin >> englishScore;
    while (!checkToeic(englishScore))
    {
        cout << "Enter English Score: "; cin >> englishScore;

    }

    cin.ignore(32767, '\n');
    cout << "Enter Entry test score: "; cin>> entryTestScore;
}
void NormalStudent::ShowMyInfor()
{
    Student::ShowMyInfor();
    cout << "English Score: " << englishScore << endl;
    cout << "Entry test score: " << entryTestScore << endl;
}