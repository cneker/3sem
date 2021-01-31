#ifndef ENGINEER_H
#define ENGINEER_H
#include "worker.h"

class engineer :public worker
{
protected:
	int age;
public:
	engineer(); //����������� �� ���������
	engineer(const char* name, const char* surname, int experience, int age); //����������� � �����������
	void set(const char* name, const char* surname, int experience, int age); //������������ ���������� ��������
	void show(); //�������� ����������� �����������
	~engineer(); //����������
};

#endif // !ENGINEER_H