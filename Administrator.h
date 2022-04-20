#pragma once
#include "SchoolWorker.h"
class Administrator : public SchoolWorker
{
	public:
	Administrator(string fn, string sn, int age, double salary);
	void setNetSalary();
};

