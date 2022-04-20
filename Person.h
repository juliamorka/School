#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
	public:
	Person(string fn, string ln, int age);
	inline string getFirstName() const;
	inline string getLastName() const;
	inline int getAge() const;
	inline void setFirstName(string fn);
	inline void setLastName(string ln);
	inline void setAge(int n);
	private:
	string sFirstName;
	string sLastName;
	int nAge;
};
string Person::getFirstName() const
{
	return sFirstName;
}
string Person::getLastName() const
{
	return sLastName;
}
int Person::getAge() const
{
	return nAge;
}
void Person::setFirstName(string fn)
{
	sFirstName = fn;
}
void Person::setLastName(string ln)
{
	sLastName = ln;
}
void Person::setAge(int n)
{
	nAge = n;
}
