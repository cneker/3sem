#ifndef WORKER_H
#define WORKER_H
#include "person.h"

class worker :public person
{
protected:
	int experience;
public:
	worker(); //конструктор по умолчанию
	worker(const char* name, const char* surname, int experience); //конструктор с параметрами
	void set(const char* name, const char* surname, int experience); //присваивание экземпляру значений
	void show(); //просмотр содержимого экземпляров
	~worker(); //деструктор
};

#endif // !WORKER_H