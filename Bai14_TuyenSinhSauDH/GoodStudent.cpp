#include"GoodStudent.h"

GoodStudent::GoodStudent()
{
    GPA = 0;
    bestRewardName = " ";
}
GoodStudent::GoodStudent(float gpa, string bestRW)
{
    GPA = gpa;
    bestRewardName = bestRW;
}
GoodStudent::GoodStudent(GoodStudent& st)
{
    GPA = st.GPA;
    bestRewardName = st.bestRewardName;
}
GoodStudent::~GoodStudent()
{

}
void GoodStudent::setGPA(float gpa)
{
    GPA = gpa;
}
float GoodStudent::getGPA()
{
    return GPA;
}
void GoodStudent::setBestReward(string RWname)
{
    bestRewardName = RWname;
}
string GoodStudent::getBestReward()
{
    return bestRewardName;
}
int GoodStudent::getGradeType()
{
    return typeGood;
}
void GoodStudent::EnterMyInfor()
{
    Student::EnterMyInfor();

    cout << "Enter GPA: "; cin >> GPA;
    while (!checkGPA(GPA))
    {
        cout << "Enter GPA: "; cin >> GPA;

    } 

    cin.ignore(32767, '\n');
    cout << "Enter the best reward name: "; getline(cin, bestRewardName);
}
void GoodStudent::ShowMyInfor ()
{
    Student::ShowMyInfor();
    cout << "GPA: " << GPA << endl;
    cout << "Best reward name: " << bestRewardName << endl;
}