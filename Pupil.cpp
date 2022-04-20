#include "Pupil.h"
int Pupil::IDnumber = 1000;
Pupil::Pupil(string fn, string ln, int age) : Person(fn ,ln, age)
{
	ID = to_string(IDnumber++);
}
double Pupil::GetAvgGrade() //srednia z wszystkich przedmiotów
{
	int n = 0;
	double s = 0;
	for (int i = 0; i < sizeof(fAllGrades)/sizeof(double); i++)
	{
		if(fAllGrades[i] == 0) continue;
		n++;
		s += fAllGrades[i];
	}
	if (n == 0) return 0;
	return s / n;
}
void Pupil::DeleteAllGrades()
{
	for (int i = 0; i < sizeof(fAllGrades)/sizeof(double); i++)
	{
		fAllGrades[i] = 0;
	}
}
void Pupil::setGrade(subjects przedmiot, double ocena) //spr zakres od 2 do 5
{
	if (ocena < 2 || ocena > 5)
	{
		cout << "Ocena spoza zakresu!!!\n";
		return;
	}
	fAllGrades[przedmiot] = ocena;
}