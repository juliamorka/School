#pragma once
#include <iostream>
#include "Person.h"
using namespace std;
class SchoolWorker : public Person
{
	public:
	SchoolWorker(string fn, string sn, int age, double salary);
	inline double getNetSalary(); 
	inline double getfSalaryB(); //bo netto sie liczy inaczej dla nauczyciela i admina
	inline void setfSalaryB(double n);
	virtual void setNetSalary() = 0;
	void PrintSummary();
	private:
	double fSalaryB; //brutto
	protected:
	double fSalaryN;
};
inline double SchoolWorker::getfSalaryB()
{
	return fSalaryB;
}
inline void SchoolWorker::setfSalaryB(double n)
{
	fSalaryB = n;
}
inline double SchoolWorker::getNetSalary()
{
	return fSalaryN;
}