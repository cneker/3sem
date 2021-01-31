#ifndef CLERC_H
#define CLERC_H
#include "person.h"

class clerc :public person
{
protected:
	int time;
public:
	clerc(); //конструктор по умолчанию
	clerc(const char* name,const char* surname, int time); //конструктор с параметрами
	void set(const char* name, const char* surname, int time); //присваивание экземпляру значений
	void show(); //просмотр содержимого экземпляров
	~clerc(); //деструктор
};

#endif // !CLERC_H