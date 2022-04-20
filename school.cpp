#include <iostream>
#include "SchoolGirl.h"
#include "SchoolBoy.h"
#include "Teacher.h"
#include "Administrator.h"
#define N 2
using namespace std;
void printPupil(Pupil** p, int n);
int main()
{
    SchoolBoy sb1("Jan", "Kowalski", 15);
    SchoolGirl sg1("Anna", "Kowalska", 14);
    Teacher t1("Jakub", "Nowak", 38, 5200, 12, "IiaD");
    Administrator a1("Maria", "Nowak", 60, 5000);
    sg1.setGrade(Angielski, 5);
    sg1.setGrade(Polski, 4);
    sg1.setGrade(Fizyka, 3);
    sg1.setGrade(Matematyka, 5);
    sg1.setGrade(Niemiecki, 1);
    sg1.SetClass("iiad");
    sb1.setGrade(Angielski, 3);
    sb1.setGrade(Polski, 3);
    sb1.setGrade(Fizyka, 3);
    sb1.setGrade(Matematyka, 3);
    sb1.SetClass("iad");
    a1.PrintSummary();
    t1.PrintSummary();
    Pupil *p[N] = { &sb1, &sg1 };
    printPupil(p, N);
    return 0;
}
void printPupil(Pupil** p, int n)
{
    cout << "---PODSUMOWANIE---" << endl;
    for (int i = 0; i < n; i++)
    {
        (*(p[i])).PrintSummary();
    }
}

