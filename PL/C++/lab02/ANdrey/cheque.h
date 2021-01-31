#ifndef CHEQUE_H
#define CHEQUE_H
#include "receipt.h"

class Cheque : public Receipt
{
protected:
	int sum;
public:
	Cheque(); //конструктор по умолчанию
	Cheque(const char* name, const char* type, int sum); //конструктор с параметрами
	void set(const char* name, const char* type, int sum); //присваивание экземпляру значений
	void show(); //просмотр содержимого экземпляров
	~Cheque(); //деструктор
};

#endif // !CHEQUE_H