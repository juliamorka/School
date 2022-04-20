#pragma once
#include "SchoolWorker.h"
class Teacher : public SchoolWorker
{
	public:
	Teacher(string fn, string sn, int age, double salary, int years, string ssClass);
	string sClass; //klasa której jest wychowawc¹
	int nWorkingYears; //liczba przepracowanych lat
	void setNetSalary();
};

