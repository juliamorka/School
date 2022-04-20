#include "SchoolGirl.h"
SchoolGirl::SchoolGirl(string fn, string ln, int age) : Pupil(fn, ln, age)
{
	ID = "F_" + ID;
}
void SchoolGirl::PrintOutfit()
{
	cout << "Biala bluzka z krawatem (opcjonalnie dodatkowo granatowy lub czarny sweterek, granatowa(lub czarna) spodniczka, plaskie obuwie\n";
}
void SchoolGirl::PrintSummary()
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