#ifndef INVOICE_H
#define INVOICE_H
#include "document.h"

class Invoice :public Document
{
protected:
	char* type_of;
public:
	Invoice(); //конструктор по умолчанию
	Invoice(const char* type,const char* type_of); //конструктор с параметрами
	void set(const char* type, const char* type_of); //присваивание экземпляру значений
	void show(); //просмотр содержимого экземпляров
	~Invoice(); //деструктор
};

#endif // !INVOICE_H