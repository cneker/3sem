#include "worker.h"

worker::worker() : person() { experience = 0; }

worker::worker(const char* name, const char* surname, int experience)
{
	this->name = new char[20];
	this->surname = new char[20];
	strcpy(this->name, name);
	strcpy(this->surname, surname);
	this->experience = experience;
}

void worker::set(const char* name, const char* surname, int experience)
{
	this->name = new char[20];
	this->surname = new char[20];
	strcpy(this->name, name);
	strcpy(this->surname, surname);
	this->experience = experience;
}

void worker::show()
{
	cout << endl << name << endl
		<< surname << endl
		<< experience << endl;
}

worker::~worker() {}