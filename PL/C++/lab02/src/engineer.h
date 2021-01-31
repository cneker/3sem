#ifndef ENGINEER_H
#define ENGINEER_H
#include "worker.h"

class engineer :public worker
{
protected:
	int age;
public:
	engineer(); //конструктор по умолчанию
	engineer(const char* name, const char* surname, int experience, int age); //конструктор с параметрами
	void set(const char* name, const char* surname, int experience, int age); //присваивание экземпляру значений
	void show(); //просмотр содержимого экземпляров
	~engineer(); //деструктор
};

#endif // !ENGINEER_H