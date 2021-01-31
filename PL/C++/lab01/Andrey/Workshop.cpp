#include "Workshop.h"

Workshop::Workshop() :
	count(0), name(new char [NAME_SIZE]), chief(new char [NAME_SIZE])
{
	strcpy(name, "\0");
	strcpy(chief, "\0");
	cout << "\n����������� ��� ���������� ������ ��� ������� " << this << endl;
}

Workshop::Workshop(const char* name, const char* chief, int count) :
	count(count), name(new char[NAME_SIZE]), chief(new char[NAME_SIZE])
{
	strcpy(this->name, name);
	strcpy(this->chief, chief);
	cout << "\n����������� � ����������� ������ ��� ������� " << this << endl;
}

Workshop::Workshop(const Workshop& data):
	count(data.count), name(new char[NAME_SIZE]), chief(new char[NAME_SIZE])
{
	strcpy(name, data.name);
	strcpy(chief, data.chief);
	cout << "\n����������� ����������� ������ ��� ������� " << this << endl;
}

Workshop::~Workshop()
{
	delete[] chief;
	delete[] name;
	cout << "\n���������� ������ ��� ������� " << this << endl;
}

void Workshop::show()
{
	cout << "\n��� - " << name << endl
		<< "��������� - " << chief << endl
		<< "���������� ���������� - " << count << endl;
}

char* Workshop::get_name()
{
	return name;
}

char* Workshop::get_chief()
{
	return chief;
}

int Workshop::get_count()
{
	return count;
}

void Workshop::set_name(const char* name)
{
	strcpy(this->name, name);
}

void Workshop::set_chief(const char* chief)
{
	strcpy(this->chief, chief);
}

void Workshop::set_count(int count)
{
	this->count = count;
}