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
od uzyskanej kwoty odj�� koszt uzyskania przychod�w:
- je�li pracownik mieszka w miejscowo�ci zak�adu pracy - wynosz� one 250 z�,
- je�li pracownik mieszka poza miejscowo�ci� zak�adu pracy - wynosi one 300 z�.,
kwot� zaokr�gla si� do pe�nych z�otych - jest to podstawa do obliczenia podatku dochodowego,
podstaw� do obliczenia podatku dochodowego nale�y przemno�y� przez 17 lub 32% w 
zale�no�ci od progu podatkowego, nast�pnie odj��kwot� woln� od podatku�(43,76 z�) - tylko,
gdy pracownik podpisa� o�wiadczenie PIT-2, od obliczonego w ten spos�b podatku odejmuje si� 
sk�adk� na ubezpieczenie zdrowotne, w kwocie nieprzekraczaj�cej 7,75% podstawy wymiaru.
*/