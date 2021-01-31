#include "document.h"

Document* Document::head = NULL;

Document::Document() :
	type(new char[20])
{
	next = NULL;
	add_list();
}

void Document::show()
{
	cout << "Where is virtual function?" << endl;
}

void Document::add_list()
{
	Document* p = this;
	p->next = head;
	head = p;
}

void Document::look_up()
{
	Document* p = head;
	cout << "Loking for the list" << endl;
	while (p) {
		p->show();
		p = p->next;
	}
}

Document::~Document()
{
	delete[] type;
}