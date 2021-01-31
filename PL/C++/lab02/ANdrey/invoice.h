#ifndef INVOICE_H
#define INVOICE_H
#include "document.h"

class Invoice :public Document
{
protected:
	char* type_of;
public:
	Invoice(); //����������� �� ���������
	Invoice(const char* type,const char* type_of); //����������� � �����������
	void set(const char* type, const char* type_of); //������������ ���������� ��������
	void show(); //�������� ����������� �����������
	~Invoice(); //����������
};

#endif // !INVOICE_H