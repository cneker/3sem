#ifndef EMPLOYEEH
#define EMPLOYEEH
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#define NAME_SIZE 20  //������ �����

using namespace std;

class Employee { //����� ��������
private:
	char* e_name; //���
	int e_age, e_experience; //������� � ����
public:
	Employee(); //����������� ��� ����������
	Employee(const char* name, int age, int experience); // ����������� � �����������
	Employee(const Employee& data); //����������� �����������
	~Employee(); //����������
	char* get_name(); //���� ����� (������ get ������ ������ ���������� ��������(�� ��� ��� �� �����))
	int get_age(); //���� ��������
	int get_experience(); //���� �����
	void set_name(); //������������ �����
	void set_age(); //������������ ��������
	void set_experience(); //������������ �����
	void set(); //����� ������� ������������ �����
	void show(); //����� ����������
};
#endif
