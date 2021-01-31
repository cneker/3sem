#ifndef WORKER_H
#define WORKER_H
#include "person.h"

class worker :public person
{
protected:
	int experience;
public:
	worker(); //����������� �� ���������
	worker(const char* name, const char* surname, int experience); //����������� � �����������
	void set(const char* name, const char* surname, int experience); //������������ ���������� ��������
	void show(); //�������� ����������� �����������
	~worker(); //����������
};

#endif // !WORKER_H