#include "invoice.h"

Invoice::Invoice() : 
	 type_of(new char[20])
{
	strcpy(type_of, "\0");
}

Invoice::Invoice(const char* type, const char* type_of) : 
	type_of(new char[20])
{
	strcpy(this->type, type);
	strcpy(this->type_of, type_of);
}

void Invoice::set(const char* type, const char* type_of)
{
	strcpy(this->type, type);
	strcpy(this->type_of, type_of);
}

void Invoice::show()
{
	cout << endl << type << endl
		<< type_of << endl;
}

Invoice::~Invoice() 
{
	delete[] type_of;
}
