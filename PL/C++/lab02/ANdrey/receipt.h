#ifndef RECEIPT_H
#define RECEIPT_H
#include "document.h"

class Receipt : public Document
{
protected:
	char* name;
public:
	Receipt(); //конструктор по умолчанию
	Receipt(const char* name, const char* type); //конструктор с параметрами
	void set(const char* name, const char* type); //присваивание экземпляру значений
	void show(); //просмотр содержимого экземпляров
	~Receipt(); //деструктор
};

#endif // !RECEIPT_H