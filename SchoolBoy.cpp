#include "SchoolBoy.h"
SchoolBoy::SchoolBoy(string fn, string ln, int age) : Pupil(fn, ln, age)
{
	ID = "M_" + ID;
}
void SchoolBoy::PrintOutfit()
{
	cout << "Biala lub niebieska koszula z krawatem, marynarka, polbuty, spodnie dowolne czarne lub granatowe\n";
}
void SchoolBoy::PrintSummary()
{
	cout << "Podsumowanie: " << endl;
	cout << "Imie: " << getFirstName() << endl;
	cout << "Nazwisko: " << getLastName() << endl;
	cout << "Wiek: " << getAge() << endl;
	cout << "ID: " << getID() << endl;
	cout << "Klasa: " << GetClass() << endl;
	cout << "Srednia: " << GetAvgGrade() << endl;
	PrintOutfit();
}