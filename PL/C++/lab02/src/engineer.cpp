#include "engineer.h"

engineer::engineer() : worker() { age = 0; }

engineer::engineer(const char* name, const char* surname, int experience, int age)
{
	this->name = new char[20];
	this->surname = new char[20];
	strcpy(this->name, name);
	strcpy(this->surname, surname);
	this->experience = experience;
	this->age = age;
}

void engineer::set(const char* name, const char* surname, int experience, int age)
{
	this->name = new char[20];
	this->surname = new char[20];
	strcpy(this->name, name);
	strcpy(this->surname, surname);
	this->experience = experience;
	this->age = age;
}

void engineer::show()
{
	cout << endl << name << endl
		<< surname << endl
		<< experience << endl
		<< age << endl;
}

engineer::~engineer() {}