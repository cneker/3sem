#ifndef WORKSHOP
#define WORKSHOP
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#define NAME_SIZE 20  //������ �����

using namespace std;

class Workshop { //����� ��������
private:
	char* name, * chief; //���, ���������
	int count; //���������� ����������
public:
	Workshop(); //����������� ��� ����������
	Workshop(const char* name, const char* chief, int count); // ����������� � �����������
	Workshop(const Workshop& data); //����������� �����������
	~Workshop(); //����������

	char* get_name(); //������� �����
	char* get_chief(); //������� ���������
	int get_count(); //������� ����������
	void set_name(const char* name); //������������ �����
	void set_chief(const char* chief); //������������ ����������
	void set_count(int count); //������������ ���������� �������
	void show(); //����� ����������
};
#endif
