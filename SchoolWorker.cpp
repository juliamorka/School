#include "SchoolWorker.h"
SchoolWorker::SchoolWorker(string fn, string sn, int age, double salary) : Person(fn, sn, age)
{
	fSalaryB = salary;
}
void SchoolWorker::PrintSummary()
{
	cout << "Podsumowanie: " << endl;
	cout << "Imie: " << getFirstName() << endl;
	cout << "Nazwisko: " << getLastName() << endl;
	cout << "Wiek: " << getAge() << endl;
	cout << "Pensja brutto: " << getfSalaryB() << endl;
	cout << "Pensja netto: " << getNetSalary() << endl;
}