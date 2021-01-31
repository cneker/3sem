#include "person.h"

person* person::head = NULL;

person::person()
{
	name = NULL;
	surname = NULL;
	next = NULL;
	add_list();
}

void person::show()
{
	cout << "Where is virtual function?" << endl;
}

void person::add_list()
{
	person* p = this;
	p->next = head;
	head = p;
}

void person::look_up()
{
	person* p = head;
	cout << "Loking for the list" << endl;
	while (p) {
		p->show();
		p = p->next;
	}
}

person::~person() 
{
	delete[] name;
	delete[] surname;
}