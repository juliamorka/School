#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#define M 7
using namespace std;
enum subjects { Polski, Matematyka, Fizyka, Chemia, Informatyka, Angielski, Niemiecki };
class Pupil : public Person //klasa abstrakcyjna - ma metodê czysto wirtualn¹, SchoolGirl i SchoolBoy beda z niej dziedziczyæ
{
public:
	virtual void PrintOutfit() = 0; //zalezne od plci
	inline int GetIdNum();
	double GetAvgGrade(); //srednia z wszystkich przedmiotów
	inline string GetClass();
	inline void SetClass(string c);
	void setGrade(subjects przedmiot, double ocena);
	Pupil(string fn, string ln, int age);
	virtual void PrintSummary() = 0; //zalezne od plci bo drukowanie ubrania
protected:
	static int IDnumber;
	string ID;
private:
	string sClass;
	double fAllGrades[M] = { 0 };
	void DeleteAllGrades();
};
inline int Pupil::GetIdNum() //??
{
	return IDnumber;
}
inline void Pupil::SetClass(string c)
{
	sClass = c;
}
inline string Pupil::GetClass()
{
	return sClass;
}