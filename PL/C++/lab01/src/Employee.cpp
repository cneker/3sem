#include "Employee.h"

Employee::Employee() : 
	e_age(0), e_experience(0)
{
	e_name = new char[NAME_SIZE];
	strcpy(e_name, "\0");
	cout << "\n����������� ��� ���������� ������ ��� ������� " << this << endl;
}

Employee::Employee(const char* name, int age, int experience) : 
	e_age(age), e_experience(experience)
{
	e_name = new char[NAME_SIZE];
	strcpy(e_name, name);
	cout << "\n����������� � ����������� ������ ��� ������� " << this << endl;
}

Employee::Employee(const Employee& data):
	e_age(data.e_age), e_experience(data.e_experience)
{
	e_name = new char[NAME_SIZE];
	strcpy(e_name, data.e_name);
	cout << "\n����������� ����������� ������ ��� ������� " << this << endl;
}

Employee::~Employee()
{
	delete[] e_name;
	cout << "\n���������� ������ ��� ������� " << this << endl;
}

void Employee::set()
{
	set_name();
	set_age();
	set_experience();
}

void Employee::show()
{
	cout << "\n��� - " << e_name << endl
		<< "������� - " << e_age << endl
		<< "������� ���� - " << e_experience << endl;
}

char* Employee::get_name()
{
	char* get = new char [NAME_SIZE];
	cin.get();
	cout << "\n������� ��� - ";
	cin.getline(get, NAME_SIZE);
	return get;
}

int Employee::get_age()
{
	int get;
	cout << "������� ������� - ";
	cin >> get;
	while (get > 150 || get < 0) {
		cout << "������������ ������. ��������� ����.\n";
		cout << "������� ������� - ";
		cin >> get;
	}
	return get;
}

int Employee::get_experience()
{
	int get;
	cout << "������� ���� - ";
	cin >> get;
	while (get > e_age || get < 0) {
		cout << "������������ ������. ��������� ����\n";
		cout << "������� ���� - ";
		cin >> get;
	}
	return get;
}

void Employee::set_name()
{
	strcpy(e_name, get_name());
}

void Employee::set_age()
{
	e_age = get_age();
}

void Employee::set_experience()
{
	e_experience = get_experience();
}