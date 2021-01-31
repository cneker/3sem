#include "cheque.h"

Cheque::Cheque() : 
	sum(0)
{ }

Cheque::Cheque(const char* name, const char* type, int sum) :
	Receipt(name, type), sum(sum)
{

	strcpy(this->name, name);
	strcpy(this->type, type);
}

void Cheque::set(const char* name, const char* type, int sum)
{
	strcpy(this->name, name);
	strcpy(this->type, type);
	this->sum = sum;
}

void Cheque::show()
{
	cout << endl << name << endl
		<< type << endl
		<< sum << endl;
}

Cheque::~Cheque() {}