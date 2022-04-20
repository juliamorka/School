#include "Teacher.h"
Teacher::Teacher(string fn, string sn, int age, double salary, int years, string ssClass) : SchoolWorker(fn, sn, age, salary)
{
	sClass = ssClass;
	nWorkingYears = years;
	setNetSalary();
}
void Teacher::setNetSalary()
{
	double brutto = getfSalaryB();
	double podatek = 0;
	int do_stazowego = 0;
	nWorkingYears > 20 ? do_stazowego = 20 : do_stazowego = nWorkingYears;
	brutto += brutto * do_stazowego / 100;
	podatek = 80 * brutto / 100;
	podatek = int(brutto - 125);
	podatek = podatek * 17 / 100;
	podatek = double(podatek) - 43.76;
	brutto -= podatek;
	fSalaryN = brutto;
}