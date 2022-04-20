#include "Administrator.h"
Administrator::Administrator(string fn, string sn, int age, double salary) : SchoolWorker(fn, sn, age, salary)
{
	setNetSalary();
}
void Administrator::setNetSalary()
{
	double brutto = getfSalaryB();
	double podatek = int(brutto - 250);
	podatek = podatek * 17 / 100;
	podatek = podatek - 43.76;
	brutto -= podatek;
	fSalaryN = brutto;
}
/*
od uzyskanej kwoty odj¹æ koszt uzyskania przychodów:
- jeœli pracownik mieszka w miejscowoœci zak³adu pracy - wynosz¹ one 250 z³,
- jeœli pracownik mieszka poza miejscowoœci¹ zak³adu pracy - wynosi one 300 z³.,
kwotê zaokr¹gla siê do pe³nych z³otych - jest to podstawa do obliczenia podatku dochodowego,
podstawê do obliczenia podatku dochodowego nale¿y przemno¿yæ przez 17 lub 32% w 
zale¿noœci od progu podatkowego, nastêpnie odj¹æ kwotê woln¹ od podatku (43,76 z³) - tylko,
gdy pracownik podpisa³ oœwiadczenie PIT-2, od obliczonego w ten sposób podatku odejmuje siê 
sk³adkê na ubezpieczenie zdrowotne, w kwocie nieprzekraczaj¹cej 7,75% podstawy wymiaru.
*/