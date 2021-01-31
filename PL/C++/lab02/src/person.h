#ifndef PERSON_H
#define PERSON_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class person
{
protected:
	char* name;
	char* surname;
public:
	person(); //конструктор по умолчанию
	static person* head; //указатель на начало списка
	person* next; //указатель на следующий экземпл€р списка
	virtual void show() = 0; //функци€ (виртуальна€) просмотра содержимого экземпл€ров
	void add_list(); //добавление экземпл€ра в список
	static void look_up(); //просмотр списка
	virtual ~person(); //деструктор
};

#endif // !PERSON_H