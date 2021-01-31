#include "receipt.h"

Receipt::Receipt() :  
	name(new char[20]) 
{ 
	strcpy(this->name, "\0"); 
}

Receipt::Receipt(const char* name, const char* type) :
	name(new char[20])
{
	strcpy(this->name, name);
	strcpy(this->type, type);
}

void Receipt::set(const char* name, const char* type)
{
	strcpy(this->name, name);
	strcpy(this->type, type);
}

void Receipt::show()
{
	cout << endl << type << endl
		<< name << endl;
}

Receipt::~Receipt() 
{
	delete[] name;
}