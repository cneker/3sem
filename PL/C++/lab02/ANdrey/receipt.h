#ifndef RECEIPT_H
#define RECEIPT_H
#include "document.h"

class Receipt : public Document
{
protected:
	char* name;
public:
	Receipt(); //����������� �� ���������
	Receipt(const char* name, const char* type); //����������� � �����������
	void set(const char* name, const char* type); //������������ ���������� ��������
	void show(); //�������� ����������� �����������
	~Receipt(); //����������
};

#endif // !RECEIPT_H