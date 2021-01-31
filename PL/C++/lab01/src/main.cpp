#include <iostream>
#include <Windows.h>
#include "Employee.h"

using namespace std;

Employee cpy(Employee& data) //����������� ����������� ��� ���������� ���������� ������� ��� ������������� �������� �������
{
	Employee temp(data);
	temp.set_name();
	return temp; //����� ����������� ��� ������� temp
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//�������������� ������ ��������, ����������� ��� ����������
	Employee e1[3];
	e1[0].show();
	//����������� � ����������� � �����������
	Employee e2("����", 32, 5), e3=e2;
	e2.show();
	e3.show();
	//����������� ����������� (�������� ������� �� ��������)
	Employee e4(e3); 
	e4.show();
	//������������ ������ ��������
	Employee* e5 = new Employee[3]; 
	for (int i = 0; i < 3; i++)
		e5[i].set();
	for (int i = 0; i < 3; i++)
		e5[i].show();

	Employee* ptr; //��������� �� ������
	ptr = &e5[0]; //������������ ��������� ������ ������� �������
	ptr->show(); //����� �������� ����� �������
	//����������� ����������� ��� ���������� ���������� ������� ��� ������������� �������� �������
	Employee e6 = cpy(e5[1]); 
	e6.show();

	void(Employee:: * pf)(); //��������� �� ������������ �������
	pf = &Employee::show; //������������ ������
	(e5[2].*pf)(); //����� �������� ����� �������

	delete[] e5; //����� ����������� ��� ������� �������� e5
	return 0; //����� ����������� ��� �������� e6, e4, e3, e2, ������� �������� e1
}