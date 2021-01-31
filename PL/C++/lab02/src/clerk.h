#ifndef CLERC_H
#define CLERC_H
#include "person.h"

class clerc :public person
{
protected:
	int time;
public:
	clerc(); //����������� �� ���������
	clerc(const char* name,const char* surname, int time); //����������� � �����������
	void set(const char* name, const char* surname, int time); //������������ ���������� ��������
	void show(); //�������� ����������� �����������
	~clerc(); //����������
};

#endif // !CLERC_H