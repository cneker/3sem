#include "clerk.h"

clerc::clerc() : person() { time = 0; }

clerc::clerc(const char* name, const char* surname, int time)
{
	this->name = new char[20];
	this->surname = new char[20];
	strcpy(this->name, name);
	strcpy(this->surname, surname);
	this->time = time;
}

void clerc::set(const char* name, const char* surname, int time)
{
	this->name = new char[20];
	this->surname = new char[20];
	strcpy(this->name, name);
	strcpy(this->surname, surname);
	this->time = time;
}

void clerc::show()
{
	cout << endl << name << endl
		<< surname << endl
		<< time << endl;
}

clerc::~clerc() {}
