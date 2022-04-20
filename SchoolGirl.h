#pragma once
#include "Pupil.h"
class SchoolGirl : public Pupil
{
	public:
	SchoolGirl(string fn, string ln, int age);
	void PrintOutfit();
	inline string getID();
	void PrintSummary();
	private:
	//string ID;
};
string SchoolGirl::getID()
{
	return ID;
}
