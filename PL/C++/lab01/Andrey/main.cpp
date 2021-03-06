#include <iostream>
#include "Workshop.h"

using namespace std;

Workshop cpy(Workshop& data) //����������� ����������� ��� ���������� ���������� ������� ��� ������������� �������� �������
{
	Workshop temp(data);
	return temp; //����� ����������� ��� ������� temp
}

int main()
{
	setlocale(LC_ALL, "rus");
	//�������������� ������ ��������, ����������� ��� ����������
	Workshop w1[3];
	w1[0].show();
	//����������� � ����������� � �����������
	Workshop w2("Some", "thing", 5), w3=w2;
	w2.show();
	w3.show();
	//����������� ����������� (�������� ������� �� ��������)
	Workshop w4(w3);
	w4.show();
	//������������ ������ ��������
	Workshop* e5 = new Workshop[3];
	for (int i = 0; i < 3; i++) {
		e5[i].set_name("May");
		e5[i].set_chief("Be");
		e5[i].set_count(123);
	}
	for (int i = 0; i < 3; i++)
		e5[i].show();

	Workshop* ptr; //��������� �� ������
	ptr = &e5[0]; //������������ ��������� ������ ������� �������
	ptr->show(); //����� �������� ����� �������
	//����������� ����������� ��� ���������� ���������� ������� ��� ������������� �������� �������
	Workshop e6 = cpy(e5[1]);
	e6.show();

	void(Workshop:: * pf)(); //��������� �� ������������ �������
	pf = &Workshop::show; //������������ ������
	(e5[2].*pf)(); //����� �������� ����� �������

	delete[] e5; //����� ����������� ��� ������� �������� w5
	return 0; //����� ����������� ��� �������� w6, w4, w3, w2, ������� �������� w1
}