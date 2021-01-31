#ifndef CHEQUE_H
#define CHEQUE_H
#include "receipt.h"

class Cheque : public Receipt
{
protected:
	int sum;
public:
	Cheque(); //����������� �� ���������
	Cheque(const char* name, const char* type, int sum); //����������� � �����������
	void set(const char* name, const char* type, int sum); //������������ ���������� ��������
	void show(); //�������� ����������� �����������
	~Cheque(); //����������
};

#endif // !CHEQUE_H