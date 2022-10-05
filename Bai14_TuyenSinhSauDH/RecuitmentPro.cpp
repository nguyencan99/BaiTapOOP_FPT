#include"Exception.h"
#include"checkValidation.h"
#include<string>
#include<vector>
#include"GoodStudent.h"
#include"NormalStudent.h"
#include"Student.h"
#include"RecuitmentPro.h"


RecuitmentPro::RecuitmentPro()
{
}

RecuitmentPro::~RecuitmentPro()
{
    for (int i = 0; i < pStd.size(); i++)
    {
        delete pStd[i];
    }
}
void RecuitmentPro::enterApplicantInfor()
{
    int numApplicant;
    int stdType;
	std::cin >> numApplicant;
    while (!checkNumApplicant(numApplicant))
    {
        std::cin >> numApplicant;
    }
    for (int i = 0; i < numApplicant; i++)
    {
        cout << "Choose type of applicant: " << endl;
        cout << "1. Good Student" << endl;
        cout << "2. Normal Student" << endl;
        cout << "Choose: ";
        cin >> stdType;

        Student* p_std = NULL;

        if (stdType == typeGood)
        {
            p_std = new GoodStudent();
            pStd.push_back(p_std);
        }

        if (stdType == TypeNormal)
        {
            p_std = new NormalStudent();
            pStd.push_back(p_std);
        }

        if (p_std != NULL)     p_std->EnterMyInfor();
    }

}
void RecuitmentPro::showApplicantInfor()
{
    for (int i = 0; i < pStd.size(); i++)
    {
        pStd[i]->ShowMyInfor();
    }
}
void RecuitmentPro::applicantSelect(int numRecruit)
{
    std::vector<Student*> pRecruit;
    std::vector<GoodStudent*> pGood;
    std::vector<NormalStudent*> pNoraml;
    std::vector<Student*> ptemp;
    
    int countGood = 0, countNormal = 0;
    for (int i = 0; i < pStd.size(); i++)
    {
        if (pStd[i]->getGradeType() == typeGood)
        {
            countGood++;
            GoodStudent* p = dynamic_cast<GoodStudent*>(pStd[i]);
            pGood.push_back(p);
        }
        if (pStd[i]->getGradeType() == TypeNormal)
        {
            countNormal++;
            NormalStudent* p = dynamic_cast<NormalStudent*>(pStd[i]);
            pNoraml.push_back(p);
        }
    }
    // ung vien loai goodstudent nhiu hon so luong can tuyen
    if (countGood > numRecruit)
    {
        bool stopflag = 1;
        while (stopflag)
        {
            float maxCPA = pGood[0]->getGPA();
            int index=0;
            for (int i = 0; i < pGood.size(); i++)
            {
                if (maxCPA < pGood[i]->getGPA())
                {
                    maxCPA = pGood[i]->getGPA();
                    index = i;
                }
            }
            pRecruit.push_back(pGood[index]);
            pGood.erase(pGood.begin() + index);
            if (pRecruit.size() == numRecruit)
            {
                stopflag = 0;
            }
        }

    }
    //so ung vien can tuyen bang so ung vien goodstudent
    else if (countGood = numRecruit)
    {
        for (int i = 0; i < numRecruit; i++)
        {
            pRecruit.push_back(pGood[i]);
        }
    }
    // so ung vien goodstudent it hon normalstudent
    else
    {
        int numNormal = numRecruit - countGood;
        bool stopflag = 1;

        for (int i = 0; i < countGood; i++)
        {
            pRecruit.push_back(pGood[i]);
        }

        while (stopflag)
        {
            float maxEntryScore = pNoraml[0]->getEntryTestScore();
            int index=0;
            for (int i = 0; i < pNoraml.size(); i++)
            {
                if (maxEntryScore < pNoraml[0]->getEntryTestScore())
                {
                    maxEntryScore = pNoraml[0]->getEntryTestScore();
                    index = i;
                }
            }
            pRecruit.push_back(pNoraml[index]);
            pNoraml.erase(pNoraml.begin() + index);
            if (pRecruit.size() == numRecruit)
            {
                stopflag = 0;
            }
        }

    }
}

void RecuitmentPro::arrangeGoodStudent()
{

}
void RecuitmentPro::arrangeNormalStudent()
{

}