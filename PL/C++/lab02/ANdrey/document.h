#ifndef DOCUMENT_H
#define DOCUMENT_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Document
{
protected:
	char* type;
public:
	Document(); //конструктор по умолчанию
	static Document* head; //указатель на начало списка
	Document* next; //указатель на следующий экземпл€р списка
	virtual void show() = 0; //функци€ (виртуальна€/чисто вирутальна€) просмотра содержимого экземпл€ров
	void add_list(); //добавление экземпл€ра в список
	static void look_up(); //просмотр списка
	virtual ~Document(); //деструктор
};

#endif // !DOCUMENT_H