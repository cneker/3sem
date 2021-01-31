#ifndef PERSON_H
#define PERSON_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class person
{
protected:
	char* name;
	char* surname;
public:
	person(); //����������� �� ���������
	static person* head; //��������� �� ������ ������
	person* next; //��������� �� ��������� ��������� ������
	virtual void show() = 0; //������� (�����������) ��������� ����������� �����������
	void add_list(); //���������� ���������� � ������
	static void look_up(); //�������� ������
	virtual ~person(); //����������
};

#endif // !PERSON_H