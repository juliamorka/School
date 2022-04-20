#pragma once

#include "Pupil.h"
class SchoolBoy : public Pupil
{
	public:
	SchoolBoy(string fn, string ln, int age); 
	void PrintOutfit();
	inline string getID();
	void PrintSummary();
	private:
	//string ID;
};

string SchoolBoy::getID()
{
	return ID;
}